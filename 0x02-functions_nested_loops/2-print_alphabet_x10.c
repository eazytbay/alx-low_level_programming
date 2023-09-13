#include "main.h"
/**
 *void print_alphabet_10 - print alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void) /* function to print alphabet 10 times*/
{
char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}

}
