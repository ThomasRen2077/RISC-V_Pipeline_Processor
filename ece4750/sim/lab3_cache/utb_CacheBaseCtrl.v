`default_nettype none
`timescale 1ps/1ps


`include "CacheBaseCtrl.v"
`include "vc/trace.v"

module top(  input logic clk, input logic linetrace );
 
  logic         reset;

  // Processor to Cache 
  logic         memreq_val;                                  // Request Message to Data Memory Valid Signal         
  logic         memreq_rdy;                                  // Data Memory Ready Signal
  logic         memreq_type;                                 // Data Operation Type of Memory Request Message

  logic         memresp_val;                                 // Data Memory Response Message Valid Signal
  logic         memresp_rdy;                                 // Processor Ready to Receive Data Signal
  logic         memresp_type;                                // Data Operation Type of Memory Request Message

  // Cache to Memory
  logic         cache_req_val;                               // Request Message to Data cache Valid Signal         
  logic         cache_req_rdy;                               // Cache Ready Signal
  logic         cache_req_type;                              // Data Operation Type of Cache Request Message

  logic         cache_resp_val;                              // Cache Response Message Valid Signal
  logic         cache_resp_rdy;                              // Processor Ready to Receive Cache Signal
  logic         cache_resp_type;                             // Data Operation Type of Cache Request Message



  // Control Signals
  logic        reg_en_M0;
  logic        tarray_en;
  logic        tarray_wen;
  logic        z6b_sel;
  logic        darray_write_mux_sel;
  logic        darray_wen;
  logic        write_en_sel;
  logic        spill_one_word_done;
  logic        refill_one_word_req_sent;
  logic        refill_one_word_resp_received;
  logic        Spill_or_Refill_sel;

  // Status signals
  logic        tarray_match;
  logic        current_dirty;
  logic        spill_done;
  logic        refill_req_done;
  logic        refill_resp_done;

  // extra ports
  logic        flush_done;

  // Instantiate the processor datapath
  lab3_cache_CacheBaseCtrl DUT
  ( 
    .*
  ); 


  initial begin

    $display("Start of Testbench");
    // Initalize all the signal inital values.

    #20


    $finish();

  end

  
endmodule

