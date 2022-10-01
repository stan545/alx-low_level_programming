#!/bin/sh
gcc -Werror -Wextra -Wall -pedantic -c *.c
ar -r liball.a *.c
ranlib liball.a
ar -t liball.a
