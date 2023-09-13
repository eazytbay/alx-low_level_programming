#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints n times table starting with 0
 * Return: Always 0
 */

void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}
int i = 0;
while (i <= 10)
{
printf("%d x %d = %d\n", n, i, n * i);
i++;
}
}
/**int main()
 * {
 * int n;
 * printf("Enter a number (0 to 15): ");
 * scanf("%d", &n);
 * print_times_table(n);
 * */
return 0;
}
}
