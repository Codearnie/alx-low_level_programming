#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Codearnie/alx-low_level_programming/master/0x18-dynamic_libraries/libcheck.so
export LD_PRELOAD="$PWD/../libcheck.so"
