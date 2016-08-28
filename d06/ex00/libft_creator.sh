#!/bin/sh
gcc -Wall -Wextra -Werror -c *.c
ar -cq libft.a *.o && rm *.o
