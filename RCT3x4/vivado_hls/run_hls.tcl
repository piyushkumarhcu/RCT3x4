############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project -reset proj
set_top algo_top
add_files ./src/algo_top.cpp
add_files  ./src/algo_top.h
add_files -tb ./src/algo_top_tb.cpp

open_solution -reset "solution1"
set_part {xcvu9p-flgc2104-2-e} -tool vivado
create_clock -period 240MHz -name default
set_clock_uncertainty 30%
#source "./proj/solution1/directives.tcl"
##csim_design
csynth_design
##cosim_design
##export_design -format ip_catalog

exit
