#!/bin/sh
gcc -c *.c
ar -r liball.a *.c
ranlib liball.a
ar -t liball.a
