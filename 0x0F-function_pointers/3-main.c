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
int first_num, second_num;
char *operation;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
first_num = atoi(argv[1]);
operation = argv[2];
second_num = atoi(argv[3]);
if (get_op_func(operation) == NULL || operation[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*operation == '/' && second_num == 0) ||
(*operation == '%' && second_num == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(operation)(first_num, second_num));
return (0);
}

