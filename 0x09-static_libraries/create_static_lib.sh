#!/bin/bash
* for creating the object files
gcc -wall -pedantic -werror -wextra -c *.c

* for creating the static library
ar -rc liball.a *.o

* for indexing
ranlib liball.a

* for listing object files
ar -t libmy.a
nm libmy.a
