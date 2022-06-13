#!/bin/bash
wget -P /tmp https://github.com/MosesSoftEng/alx-low_level_programming/tree/master/0x18-dynamic_libraries/injection.so
export LD_PRELOAD=/tmp/injection.so
