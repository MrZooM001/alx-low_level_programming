#!/bin/bash
wget -P /tmp https://github.com/MrZooM001/alx-low_level_programming/tree/main/0x18-dynamic_libraries/wingiga.so
export LD_PRELOAD=/tmp/wingiga.so
