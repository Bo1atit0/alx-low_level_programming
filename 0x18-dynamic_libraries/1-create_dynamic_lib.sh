#!/bin/bash

gcc -c -fPIC *.c
gcc - shared -o mylib.so *.o
