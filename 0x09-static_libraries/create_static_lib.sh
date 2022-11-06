#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
ranlib liball.a
ar rcs libmy.a *.o
ranlib libmy.a
