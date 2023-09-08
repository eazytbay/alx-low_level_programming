#include <stdio.h>
/**
 * main - A program that prints alphabeth in lowercase, followed by a new line
 * Return: 0 = success
 */
int main(void)
{
char alph  = 'a'; /*Begin with the firs lowercase alphabeh*/
/*The loop function is used to print the alphabet*/
while (alph <= 'z')
{
putchar(alph); /* used to print or display the current alphabet*/
alph++; /* increments and moves to the next letter*/
}
putchar('\n'); /* new line character*/
return (0);
}
