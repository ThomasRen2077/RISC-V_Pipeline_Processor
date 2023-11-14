//      // verilator_coverage annotation
        `ifndef LAB3_CACHE_CACHE_BASE_DPATH_V
        `define LAB3_CACHE_CACHE_BASE_DPATH_V
        
        `include "vc/mem-msgs.v"
        `include "vc/regs.v"
        `include "vc/muxes.v"
        `include "Mux16.v"
        
        
        
        
        // -------------------- Cache Datapath --------------------
        module lab3_cache_CacheBaseDpath
        (
 000873   input  logic         clk,
 000001   input  logic         reset,
          
          // Processor to Cache 
 000006   input  logic [31:0]  memreq_msg_addr,               
 000002   input  logic [31:0]  memreq_msg_data,               
 000006   output logic [31:0]  memresp_msg_data,
        
          // Cache to Memory
 000006   output logic [31:0]  cache_req_msg_addr,               
 000012   output logic [31:0]  cache_req_msg_data,               
 000001   input  logic [31:0]  cache_resp_msg_data, 
        
          // control signals
 000010   input  logic         reg_en_M0,
 000005   input  logic         tarray_en,
 000004   input  logic         tarray_wen,
 000001   input  logic         z6b_sel,
 000001   input  logic         darray_write_mux_sel,
 000006   input  logic         darray_wen,
 000002   input  logic         write_en_sel,
 000064   input  logic         spill_one_word_done,
 000032   input  logic         refill_one_word_req_sent,
 000032   input  logic         refill_one_word_resp_received,
 000002   input  logic         Spill_or_Refill_sel,
        
        
          // status signals
 000005   output logic         tarray_match,
 000004   output logic         current_dirty,
 000005   output logic         spill_done,
 000002   output logic         refill_req_done,
 000002   output logic         refill_resp_done,
        
          // extra signals
 000001   input  logic        flush,
 000001   output logic        flush_done
        );
        
        
        //--------------------------------------------------------------------
        // M0 part
        //--------------------------------------------------------------------
        
          localparam c_reset_vector = 32'h0; 
 000006   logic [31:0] cache_request_addr_M0;
 000002   logic [31:0] cache_request_data_M0;
        
          vc_EnResetReg#(32, c_reset_vector) cache_request_addr_reg_M0
            (
              .clk    (clk),
              .reset  (reset),
              .en     (reg_en_M0),
              .d      (memreq_msg_addr),
              .q      (cache_request_addr_M0)
            );
        
          vc_EnResetReg#(32, c_reset_vector) cache_request_data_reg_M0
            (
              .clk    (clk),
              .reset  (reset),
              .en     (reg_en_M0),
              .d      (memreq_msg_data),
              .q      (cache_request_data_M0)
            );
        
        
          logic [20:0] tag_array [0:31];
%000000   logic dirty_array [0:31];
%000000   logic valid_array [0:31];
        
        
 000006   logic [20:0] current_tag;
 000007   logic [4:0] index_M0;
 000007   logic [3:0] offset_M0;
          assign current_tag = cache_request_addr_M0[31:11];
          assign index_M0 = cache_request_addr_M0[10:6];
          assign offset_M0 = cache_request_addr_M0[5:2];
        
 001311   always_comb begin
 000141     if(tarray_en && valid_array[index_M0]) begin
 001170       current_dirty = dirty_array[index_M0];
 000546       if(current_tag == tag_array[index_M0])    tarray_match = 1'b1;      // Hit
 000624       else                                      tarray_match = 1'b0;      // Miss
            end
 000141     else begin
 000141       tarray_match = 1'b0;
 000141       current_dirty = 1'bx;
            end
          end
        
 000436   always_ff @(posedge clk) begin
 000009     if (reset) begin
 000009       for (logic[5:0] i = 0; i < 32; i++) begin
 000288         tag_array[i[4:0]] <= 0;
 000288         valid_array[i[4:0]] <= 1'b0;
              end
            end
 000427     else begin
 000427       tag_array[index_M0] <= tag_array[index_M0];
 000427       valid_array[index_M0] <= valid_array[index_M0];
        
 000002       if(tarray_wen) begin
 000002         tag_array[index_M0] <= current_tag;
 000002         valid_array[index_M0] <= 1'b1;
              end
        
            end
          end
          
        
          // Address Get through z6b Mux
          localparam mask = 32'hFFFFFFC0; 
 000007   logic [31:0] z6b_result;
          assign z6b_result = cache_request_addr_M0 & mask;
        
 000006   logic [31:0] z6b_mux_result;
          vc_Mux2#(32) z6b_mux
            (
              .in0  (cache_request_addr_M0),
              .in1  (z6b_result),
              .sel  (z6b_sel),
              .out  (z6b_mux_result)
            );
        
        
        
        
          // Get Spill Address
 000012   logic [31:0] spill_initial_addr;
 000004   logic [31:0] spill_addr;
 000004   logic [4:0] spill_counter;
 000001   logic [5:0] flush_counter;
        
        
        
          // Updating Spill Counter and Flush Counter
 000436   always_ff@(posedge clk) begin
 000009     if(reset) begin
 000009         spill_counter <= 0;
 000009         flush_counter <= 0;
            end
 000427     else begin
 000427         spill_counter <= spill_counter;
 000427         flush_counter <= flush_counter;
        
 000032         if(spill_one_word_done)                    spill_counter <= spill_counter + 1;
 000132         if(spill_done)                             spill_counter <= 0;
 000032         if(flush && spill_done && !flush_done)     flush_counter <= flush_counter + 1;
 000178         if(!flush)                                 flush_counter <= 0;
            end
          end
        
          // Calculate Spill address
          vc_Mux2#(5) spill_index_mux
          (
            .in0  (index_M0),
            .in1  (flush_counter[4:0]),
            .sel  (flush),
            .out  (index_spill)
          );
        
          assign spill_initial_addr = {{tag_array[index_spill]}, {index_spill},{6'b0}};
        
          assign spill_addr = spill_initial_addr + {{26{1'b0}}, {spill_counter[3:0]}, {2'b0}};
        
        
          // Calculate Spill Data
 000012   logic [31:0] cache_to_mem_data;
 000010   logic [4:0]  index_spill;
        
        
        
 001311   always_comb begin
 001035       if(spill_counter ==  5'd0) begin
 001035           cache_to_mem_data = data_array[index_spill][31:0];
              end
 000018       else if(spill_counter ==  5'd1) begin
 000018           cache_to_mem_data = data_array[index_spill][63:32];
              end
 000018       else if(spill_counter ==  5'd2) begin
 000018           cache_to_mem_data = data_array[index_spill][95:64];
              end
 000018       else if(spill_counter ==  5'd3) begin
 000018           cache_to_mem_data = data_array[index_spill][127:96];
              end
 000018       else if(spill_counter ==  5'd4) begin
 000018           cache_to_mem_data = data_array[index_spill][159:128];
              end
 000018       else if(spill_counter ==  5'd5) begin
 000018           cache_to_mem_data = data_array[index_spill][191:160];
              end
 000018       else if(spill_counter ==  5'd6) begin
 000018           cache_to_mem_data = data_array[index_spill][223:192];
              end
 000018       else if(spill_counter ==  5'd7) begin
 000018           cache_to_mem_data = data_array[index_spill][255:224];
              end
 000018       else if(spill_counter ==  5'd8) begin
 000018           cache_to_mem_data = data_array[index_spill][287:256];
              end
 000018       else if(spill_counter ==  5'd9) begin
 000018           cache_to_mem_data = data_array[index_spill][319:288];
              end
 000018       else if(spill_counter ==  5'd10) begin
 000018           cache_to_mem_data = data_array[index_spill][351:320];
              end
 000018       else if(spill_counter ==  5'd11) begin
 000018           cache_to_mem_data = data_array[index_spill][383:352];
              end
 000018       else if(spill_counter ==  5'd12) begin
 000018           cache_to_mem_data = data_array[index_spill][415:384];
              end
 000018       else if(spill_counter ==  5'd13) begin
 000018           cache_to_mem_data = data_array[index_spill][447:416];
              end
 000018       else if(spill_counter ==  5'd14) begin
 000018           cache_to_mem_data = data_array[index_spill][479:448];
              end
 000006       else if(spill_counter ==  5'd15) begin
 000018           cache_to_mem_data = data_array[index_spill][511:480];
              end
 000006       else begin
 000006           cache_to_mem_data = 32'bx;
              end
          end
        
          // Assign Spill Data to Cache_to_Memory_Request Data 
          assign cache_req_msg_data = cache_to_mem_data;
        
          // Issue Spill Done Signal
 001311   always_comb begin
 000006     if(spill_counter >= 5'd16)                            spill_done =1'b1;
 000392     else if(flush && !dirty_array[index_spill])           spill_done =1'b1;
 000913     else                                                  spill_done =1'b0;
          end
        
          // Issue Flush Done Signal
 000436   always_comb begin
 000100     if(flush_counter >= 6'd32)                            flush_done =1'b1;
 000336     else                                                  flush_done =1'b0;
          end
        
        
        
          // Data Replicate itself for Write Hit
          logic [511:0] repl_cachereq_data;
          assign repl_cachereq_data = {{16{cache_request_data_M0}}};
        
        
          // Update Refill Req Counter
 000006   logic [31:0] refill_addr;
 000002   logic [4:0] refill_req_counter;
        
 000436   always_ff@(posedge clk) begin
 000009     if(reset) begin
 000009       refill_req_counter <= 0;
            end
 000427     else begin
 000427       refill_req_counter <= refill_req_counter;
 000016       if(refill_one_word_req_sent)        refill_req_counter <= refill_req_counter + 1;
 000001       if(refill_resp_done)                refill_req_counter <= 0;
            end
          end
        
        
          // Calculate Refill Req Address
          assign refill_addr = z6b_mux_result + {{26{1'b0}}, {refill_req_counter[3:0]}, {2'b0}};
        
          // Issue Refill Req End Signal
 000436   always_comb begin
 000113     if(refill_req_counter >= 5'd16)       refill_req_done = 1'b1;
 000323     else                                  refill_req_done = 1'b0;
          end
        
          // Get 512 bits Refill data from cache_resp_msg_data
 000002   logic [4:0] refill_resp_counter;
          logic [511:0] refill_data;
        
          // Update Refill Respone Counter
 000436   always_ff@(posedge clk) begin
 000009     if(reset) begin
 000009         refill_resp_counter <= 0;
            end
 000427     else begin
 000427         refill_resp_counter <= refill_resp_counter;
 000016         if(refill_one_word_resp_received)   refill_resp_counter <= refill_resp_counter + 1;
 000001         if(refill_resp_done)                refill_resp_counter <= 0;
            end
          end
        
          // Concatenate Data
 000436   always_ff@(posedge clk) begin
 000009     if(reset) begin
 000009         refill_data <= 0;
            end
 000427     else begin
 000427         refill_data <= refill_data;
        
 000001         if(refill_resp_counter == 5'd0 && refill_one_word_resp_received) begin
 000001             refill_data[31:0] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd1 && refill_one_word_resp_received) begin
 000001             refill_data[63:32] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd2 && refill_one_word_resp_received) begin
 000001             refill_data[95:64] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd3 && refill_one_word_resp_received) begin
 000001             refill_data[127:96] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd4 && refill_one_word_resp_received) begin
 000001             refill_data[159:128] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd5 && refill_one_word_resp_received) begin
 000001             refill_data[191:160] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd6 && refill_one_word_resp_received) begin
 000001             refill_data[223:192] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd7 && refill_one_word_resp_received) begin
 000001             refill_data[255:224] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd8 && refill_one_word_resp_received) begin
 000001             refill_data[287:256] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd9 && refill_one_word_resp_received) begin
 000001             refill_data[319:288] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd10 && refill_one_word_resp_received) begin
 000001             refill_data[351:320] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd11 && refill_one_word_resp_received) begin
 000001             refill_data[383:352] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd12 && refill_one_word_resp_received) begin
 000001             refill_data[415:384] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd13 && refill_one_word_resp_received) begin
 000001             refill_data[447:416] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd14 && refill_one_word_resp_received) begin
 000001             refill_data[479:448] <= cache_resp_msg_data; 
                end
 000001         else if(refill_resp_counter == 5'd15 && refill_one_word_resp_received) begin
 000001             refill_data[511:480] <= cache_resp_msg_data; 
                end
            end
          end
        
          // Issue Refill Resp End Signal
 000436   always_comb begin
 000001     if(refill_resp_counter >= 5'd16)    refill_resp_done =1'b1;
 000435     else                                refill_resp_done =1'b0;
          end
        
        
          // Select Cache to Memory Request Address 
          vc_Mux2#(32) Spill_or_Refill_Mux
          (
            .in0  (spill_addr),
            .in1  (refill_addr),
            .sel  (Spill_or_Refill_sel),
            .out  (cache_req_msg_addr)
          );
        
        
        
          // Walk through Write Data Select Mux
          logic [511:0] write_data;
          vc_Mux2#(512) darray_write_mux
          (
            .in0  (repl_cachereq_data),
            .in1  (refill_data),                           
            .sel  (darray_write_mux_sel),
            .out  (write_data)
          );
        
        
        
        
        //--------------------------------------------------------------------
        // M1 part
        //--------------------------------------------------------------------
        
        
 000002   logic [15:0] write_word_enable;
%000000   logic [15:0] offset_write;
        
          // This creates a one-hot code with a '1' at the desired offset
          assign offset_write = 16'b1 << offset_M0;         
        
          vc_Mux2#(16) word_en_mux
            (
              .in0  (16'hFFFF),
              .in1  (offset_write),
              .sel  (write_en_sel),
              .out  (write_word_enable)
            );
        
          logic [511:0] data_array [0:31];
          logic [511:0] data_array_output;
        
 000436   always_ff@(posedge clk) begin
        
 000009     if (reset) begin
 000009       for (logic[5:0] i = 0; i < 32; i++) begin
 000288         data_array[i[4:0]] <= 0;
 000288         dirty_array[i[4:0]] <= 1'b0;
              end
            end
        
 000427     else begin
            
 000427       dirty_array[index_M0] <= dirty_array[index_M0];
 000427       data_array[index_M0] <= data_array[index_M0];
        
 000001       if(darray_wen && tarray_match)            dirty_array[index_M0] <= 1'b1;
 000131       if(flush && spill_done)                   dirty_array[index_spill] <= 1'b0;
        
 000002       if(write_word_enable[0] && darray_wen) begin 
 000002         data_array[index_M0][31:0] <= write_data[31:0];
              end
        
 000002       if(write_word_enable[1] && darray_wen) begin
 000002         data_array[index_M0][63:32] <= write_data[63:32];
              end
        
 000002       if(write_word_enable[2] && darray_wen) begin
 000002         data_array[index_M0][95:64] <= write_data[95:64];
              end
        
 000002       if(write_word_enable[3] && darray_wen) begin
 000002         data_array[index_M0][127:96] <= write_data[127:96];
              end
        
 000002       if(write_word_enable[4] && darray_wen) begin
 000002         data_array[index_M0][159:128] <= write_data[159:128];
              end
        
 000002       if(write_word_enable[5] && darray_wen) begin
 000002         data_array[index_M0][191:160] <= write_data[191:160];
              end
        
 000002       if(write_word_enable[6] && darray_wen) begin
 000002         data_array[index_M0][223:192] <= write_data[223:192];
              end
        
 000002       if(write_word_enable[7] && darray_wen) begin
 000002         data_array[index_M0][255:224] <= write_data[255:224];
              end
        
 000002       if(write_word_enable[8] && darray_wen) begin
 000002         data_array[index_M0][287:256] <= write_data[287:256];
              end
        
 000002       if(write_word_enable[9] && darray_wen) begin
 000002         data_array[index_M0][319:288] <= write_data[319:288];
              end
        
 000002       if(write_word_enable[10] && darray_wen) begin
 000002         data_array[index_M0][351:320] <= write_data[351:320];
              end
        
 000002       if(write_word_enable[11] && darray_wen) begin
 000002         data_array[index_M0][383:352] <= write_data[383:352];
              end
        
 000002       if(write_word_enable[12] && darray_wen) begin
 000002         data_array[index_M0][415:384] <= write_data[415:384];
              end
        
 000002       if(write_word_enable[13] && darray_wen) begin
 000002         data_array[index_M0][447:416] <= write_data[447:416];
              end
        
 000002       if(write_word_enable[14] && darray_wen) begin
 000002         data_array[index_M0][479:448] <= write_data[479:448];
              end
        
 000003       if(write_word_enable[15] && darray_wen) begin
 000003         data_array[index_M0][511:480] <= write_data[511:480];
              end
            end
          end
        
          assign data_array_output = data_array[index_M0];
        
          lab3_cache_Mux16#(32) output_mux
              (
                .in0   (data_array_output[31:0]),
                .in1   (data_array_output[63:32]),
                .in2   (data_array_output[95:64]),
                .in3   (data_array_output[127:96]),
                .in4   (data_array_output[159:128]),
                .in5   (data_array_output[191:160]),
                .in6   (data_array_output[223:192]),
                .in7   (data_array_output[255:224]),
                .in8   (data_array_output[287:256]),
                .in9   (data_array_output[319:288]),
                .in10  (data_array_output[351:320]),
                .in11  (data_array_output[383:352]),
                .in12  (data_array_output[415:384]),
                .in13  (data_array_output[447:416]),
                .in14  (data_array_output[479:448]),
                .in15  (data_array_output[511:480]),
                .sel   (offset_M0),
                .out   (memresp_msg_data)
              );
        
        endmodule
        
        
        
        
        
        `endif 
        