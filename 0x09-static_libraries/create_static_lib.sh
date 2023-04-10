#!/bin/bash
gcc -Wall -pefantic -Werror -Wextra -c *c
ar rc liball.a
ar rc liball.a *.o
ranlib liball.a
