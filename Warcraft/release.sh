#!/bin/bash/
#https://stackoverflow.com/questions/7724569/debug-vs-release-in-cmake
mkdir Release
cd Release
cmake -DCMAKE_BUILD_TYPE=Release ..
make
