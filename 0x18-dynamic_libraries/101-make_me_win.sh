#!/bin/bash
wget -P /usr \
  https://github.com/sontomtimde/alx-low_level_programming/tree/\
  master/0x18-dynamic_libraries
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
