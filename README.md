# cifar10-hls
https://github.com/rjkris/cifar10-HLS

## HLS
  - make IP
  ```
  $ cd HLS
  $ vivado_hls -f script.tcl
  ```


## RTL
  - make .bit file
  ```
  (edit  /FPGA/RTL/script.tcl)
   -> em.avnet.com:ultra96v1:part0:1.2
   -> xilinx.com:ip:zynq_ultra_ps_e:3.3

  
  $ cd RTL
  $ vivado -mode batch -source script.tcl -tclargs skynet ./ ../HLS/model/solution1/impl/ip
  ```

## TRAIN
  - make Parameters
  ```
    
  ```

