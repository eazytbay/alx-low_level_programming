#include <stdio.h>
/**
 * main - Code begins here
 * @a: varible
 * Return: Always 0
 */
int main(void)
{
int a[] = {42, 43, 98, 99, 101};
int *p;
p = a;
/*Add the line here*/
printf("a[2] = %d\n", *(p + 2));
p[1] = 98;
printf("p[1] = %d\n", p[1]);    
return (0);
}

