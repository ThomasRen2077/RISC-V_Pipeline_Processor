# Use x3 to track the control flow pattern
addi  x3, x0, 0             # 0x0200
lui   x1,     %hi[label_a]  # 0x0204
addi  x1, x1, %lo[label_a]  # 0x0208
nop                         # 0x020c
nop                         # 0x0210
nop                         # 0x0214
nop                         # 0x0218
nop                         # 0x021c
nop                         # 0x0220
nop                         # 0x0224
nop                         # 0x0228
jalr  x31, x1, 0            # 0x022c
nop                         # 0x0230
nop
nop
nop
nop
nop
nop
nop
addi  x3, x3, 0b01          
nop
nop
nop
nop
nop
nop
nop
nop
label_a:
addi  x3, x3, 0b10
nop
nop
nop
nop
nop
nop
nop
nop
# Check the link address
csrw  proc2mngr, x31 > 0x0230

