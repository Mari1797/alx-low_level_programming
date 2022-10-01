#/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rc linball.a *.o
