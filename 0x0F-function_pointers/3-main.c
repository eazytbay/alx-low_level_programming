#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - A Program Prints the result of simple arithmetic operations.
 * @argc: arguments passed
 * @argv: array pointers
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int first_num = atoi(argv[1]);
char *op = argv[2];
int second_num = atoi(argv[3]);
int rslt;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && second_num == 0) || (*op == '%' && second_num == 0))
{
printf("Error\n");
exit(100);
}
rslt = get_op_func(op)(first_num, second_num);
printf("%d\n", rslt);
return (0);
}
