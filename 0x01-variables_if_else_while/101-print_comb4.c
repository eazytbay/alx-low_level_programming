#include <stdio.h>
/**
 * main -A program that all possible differen combination of 3 digits
 * Return: 0 = success
 */
int main(void)
{
int a = 0;
while (a <= 7)
{
int b = a + 1;
while (b <= 8)
int c = b + 1;
while (c <= 9)
{
putchar(a + '0'); /* Print the first digit*/
putchar(b + '0'); /* Print the second digit*/
putchar(c + '0'); /* Print the third digit*/
if (a < 7)
{
putchar(','); /*Print a comma*/
putchar(' '); /* Print a space*/
}
c++;
}
b++;
}
a++;
}
putchar('\n'); /* Print a newline character*/
return (0);
}
