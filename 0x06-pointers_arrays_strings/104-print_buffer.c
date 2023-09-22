#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - A Function that prints the 
 * content of size bytes of the buffer
 * @b: The pointer to the buffer
 * @size: size of the buffer
 * Return: Always 0
 */
void print_buffer(char *b, int size)
{
int i = 0;
int position = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (position < size)
{
printf("%08x: ", position);
while (i < 10)
{
if (position + i < size)
{
printf("%02x", (unsigned char)b[position + i]);
if (i % 2 != 0)
{
printf(" ");
}
}
else
{
printf("  ");
}
i++;
}
printf(" ");
i = 0;
while (i < 10)
{
if (position + i < size)
{
char c = b[position + i];
if (isprint(c))
{
printf("%c", c);
}
else
{
printf(".");
}
}
i++;
}
printf("\n");
position += 10;
}
}
