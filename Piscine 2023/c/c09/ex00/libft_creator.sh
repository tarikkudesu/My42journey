#!/bin/sh
gcc -Wall -Wextra -Werror -c *.c;
ar crs lib_ft.a *.o;
rm *.o;
