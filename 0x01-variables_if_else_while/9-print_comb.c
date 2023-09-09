#include <unistd.h>
/**
 * main - A program that prints all possible combination single digit number
 * Return: 0 = success
 */
int main(void)
{
int a = 0;
while (a <= 9)
{
int b = 0;
while (b <= 9)
{
write(1, &a, 1);
write(1, ", ", 2);
write(1, &b, 1);
write(1, "\n", 1);
b++;
}
a++;
}
return (0);
}
