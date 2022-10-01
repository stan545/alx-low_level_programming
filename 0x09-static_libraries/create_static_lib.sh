#!/bin/sh
gcc -Werror -Wextra -Wall -pedantic -c *.c
ar -r liball.a *.c
