 #include <stdio.h>
/**
 * main - A program that prints the first 98 fibonacci
 * starting with 1 and 2
 * Return: 0 = success
 */
int main(void)
{
int n = 98;
int a = 1, b = 2;
int i = 2;
int temp = a + b;
/*Print the first two Fibonacci numbers (1 and 2)*/
printf("%d, %d", a, b);
while (i < n)
{
a = b;
b = temp;
printf(", %d", b);
if (i < n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
return (0);
}

