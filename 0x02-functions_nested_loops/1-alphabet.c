#include <unistd.h>

/*
 * _putchar - writes a character to the standard output
 * @c: The character to be written
 * Return: 0 On success
 */
int _putchar(char c) 
{
/*
 * print_alphabet - prints the lowercase alphabet followed by a new line
 *
 * Description: This function prints all lowercase letters from 'a' to 'z'
 * in ascending order, followed by a new line character.
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
