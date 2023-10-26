0x14. C - Bit manipulation
*Editors Used: vim
*All files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
*All files ended with a new line
*All codes used the Betty style. It was checked using betty-style.pl and betty-doc.pl
*No global variables were used
*Not more than 5 functions were used per file
*The only C standard library functions used are malloc, free and exit. Functions like printf, puts, calloc, realloc were not used
*_putchar was used
*The prototypes of functions and the prototype of the function _putchar are included in the header file called main.h
*All header files are include guarded
#prototypes used in this project#
*int _putchar(char c);
*unsigned int binary_to_uint(const char *b);
*void print_binary(unsigned long int n);
*int get_bit(unsigned long int n, unsigned int index);
*int set_bit(unsigned long int *n, unsigned int index);
*int clear_bit(unsigned long int *n, unsigned int index);
*unsigned int flip_bits(unsigned long int n, unsigned long int m);
*int get_endianness(void);
