#!/bin/bash
# wget -P /tmp https://github.com/Izimartin/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
# export LD_PRELOAD=/tmp/nrandom.so
gcc -Wall -fPIC -shared -o nrandom.so nrand.c -ldl
unset LD_PRELOAD
rm /tmp/nrandom.so 
cp nrandom.so /tmp
export LD_PRELOAD=/tmp/nrandom.so
./gm 9 8 10 24 75 9