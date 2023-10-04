#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * is_space - A function that checks for whitespace character
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
 * split_word - A function that splits a string into words
 * @str: The string to be split
 * @wds: An array to store the words
 */
static void split_word(char *str, char **wds)
{
int i, wrd = 0, bgn = 0, ent_word = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (!is_space(str[i]))
{
if (!ent_word)
{
bgn = i;
ent_word = 1;
}
}
else
{
if (ent_word)
{
int len = i - bgn;
wds[wrd] = (char *)malloc(len + 1);
if (wds[wrd] == NULL)
{
return;
}
strncpy(wds[wrd], str + bgn, len);
wds[wrd][len] = '\0';
wrd++;
ent_word = 0;
}
}
}
if (ent_word)
{
int len = i - bgn;
wds[wrd] = (char *)malloc(len + 1);
if (wds[wrd] == NULL)
{
return;
}
strncpy(wds[wrd], str + bgn, len);
wds[wrd][len] = '\0';
}
}
/*strtow - A function that splits a string into words*/
char **strtow(char *str)
{
int wdct = count_words(str);
char **wds = (char **)malloc((wdct + 1) * sizeof(char *));
if (str == NULL || wdct == '\0') /*@str: string to be splitted*/
return (NULL);
if (wds == NULL)
return (NULL);
split_word(str, wds);
return (wds); /*Return: An array of words, or NULL on error*/
}
