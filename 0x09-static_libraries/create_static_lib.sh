#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c | ar rc -s liball.a *.o
