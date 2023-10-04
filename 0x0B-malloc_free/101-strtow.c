#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * is_space - checks for whitespace character
 * @c: The character to check
 * Return: 1 if the character is a space character and 0 if it's not
 */
int is_space(char c)
{
return (isspace((unsigned char)c));
}
/**
 * count_words - A function that counts the number of words
 * @str: pointer to the input string
 * Return: count of words in the input string
 */
static int count_words(char *str)
{
int count = 0;
int in_word = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (!is_space(str[i]))
{
if (!in_word)
{
count++;
in_word = 1;
}
}
else
{
in_word = 0;
}
}
return (count);
}
/**
 * for_strndup - A function that allocates memory for the new string
 * @str: pointer to the source string
 * @n: number of characters
 * Return: pointer to a newly allocated string
 */
static char *for_strndup(const char *str, int n)
{
int i;
char *copy = (char *)malloc(n + 1);
if (copy)
{
for (i = 0; i < n; i++)
{
copy[i] = str[i];
}
copy[n] = '\0';
}
return (copy);
}
/**
 * split_word - splits a string into words
 * @str: The string to be split
 * @wds: An array to store the words
 */
static void split_word(char *str, char **wds)
{
int y = 1, i = 0, z = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (!is_space(str[i]))
{
while (!is_space(str[i]) && str[i] != '\0')
{
i++;
}
wds[z] = for_strndup(&str[y], i - y);
z++;
}
}
wds[z] = NULL;
}
/**
 * strtow - splits a string into words
 * @str: The string to be splitted
 * Return: An array of words, or NULL on error
 */
char **strtow(char *str)
{
int word_count;
char **words;
if (str == NULL || *str == '\0')
{
return (NULL);
}
word_count = count_words(str);
if (word_count == 0)
{
return (NULL);
}
words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
split_word(str, words);
return (words);
}
