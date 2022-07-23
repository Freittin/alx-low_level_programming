#!/bin/bash
gcc -wall -pedantic -wextra -werror -c *.c
ar rc liball.a *.o
