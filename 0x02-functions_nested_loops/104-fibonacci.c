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
int i = 1;
int temp = a + b;
/*Print the first two Fibonacci numbers (1 and 2)*/
printf("%d, %d", a, b);
while (i <= n - 2)
{
a = b;
b = temp;
printf(", %d", b);
i++;
}
printf("\n");
return (0);
}

