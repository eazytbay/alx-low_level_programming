#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - A Function that prints the 
 * content of size bytes of the buffer
 * @b: The pointer to the buffer
 * Return: Always 0
 */
void print_buffer(char *b, int size) 
{
int i;
int j;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
printf("%02x", (unsigned char)b[i + j]);
if (j % 2 != 0)
{
printf(" ");
}
}
else
{
printf("  ");
}
}
printf(" ");
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
char c = b[i + j];
if (isprint(c))
{
printf("%c", c);
}
else
{
printf(".");
}
}
}
printf("\n");
}
}

