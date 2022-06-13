#!/bin/bash
wget -P /tmp/ https://github.com/MosesSoftEng/alx-low_level_programming/tree/master/0x18-dynamic_libraries/evil.so
export LD_PRELOAD=/tmp/evil.so
