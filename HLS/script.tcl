############################################################
## This file is generated automatically by Vivado HLS.
############################################################
open_project model
set_top MaxConvNet

add_files weights.h
add_files biases.h
add_files conv.cpp
add_files conv_net.h
add_files conv_net.cpp
add_files linear.cpp
add_files pooling.cpp
add_files relu.cpp
add_files softmax.cpp

add_files -tb ./tb_image/horse_r.txt
add_files -tb ./tb_image/horse_g.txt
add_files -tb ./tb_image/horse_b.txt

add_files -tb conv_net_tb.cpp

open_solution "solution1"
set_part {xczu3eg-sbva484-1-e} -tool vivado
create_clock -period 10 -name default

## C simulation
csim_design

## C code synthesis to generate Verilog code
csynth_design

## C and Verilog co-simulation
## This usually takes a long time so it is commented
## You may uncomment it if necessary
#cosim_design

## export synthesized Verilog code
export_design -format ip_catalog

exit
