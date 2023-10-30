Project 0x15. on  C - File I/O

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files ended with a new line
All code used the Betty style. It was checked using betty-style.pl and betty-doc.pl
Global variables were not used
Not more than 5 functions are used per file
The only C standard library functions used are malloc, free and exit.
syscalls used: read, write, open, close
_putchar function is used
The main.c files are used to test the functions.
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
All header files are include guarded

Prototypes
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

