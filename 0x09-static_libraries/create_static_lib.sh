#!/bin/bash
gcc -Werror -Wextra -Wall -pedantic -c *.c
ar -r liball.a *.o
