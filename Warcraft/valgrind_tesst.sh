#!/bin/bash


valgrind --leak-check=full  --show-leak-kinds=all --xtree-leak=yes -s cmake-build-debug/warcraft

#objdump for checking where the variable are in memmory
##objdump -t cmake-build-debug/warcraft