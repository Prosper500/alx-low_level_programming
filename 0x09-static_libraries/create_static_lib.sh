#!/bin/bash
gcc -Wall -pefantic -Werror -Wextra -c *c
ar rcs liball.a
ar rcs liball.a *.o
ranlib liball.a
