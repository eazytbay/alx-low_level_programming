#include "main.h"
/**
 * cap_string - A function that capitalizes all words of a string
 * @c: pointer to string
 * Return: pointer to c
 */
char *cap_string(char *c)
{
int string_num;
string_num = 0;
while (c[string_num] != '\0')
{
if (c[0] >= 97 && c[0] <= 122)
{
c[0] = c[0] - 32;
}
if (c[string_num] == ' ' || c[string_num] == '\t' || c[string_num] == '\n'
|| c[string_num] == ',' || c[string_num] == ';' || c[string_num] == '.'
|| c[string_num] == '.' || c[string_num] == '!' || c[string_num] == '?'
|| c[string_num] == '"' || c[string_num] == '(' || c[string_num] == ')'
|| c[string_num] == '{' || c[string_num] == '}')
{
if (c[string_num + 1] >= 97 && c[string_num + 1] <= 122)
{
c[string_num + 1] = c[string_num + 1] - 32;
}
}
string_num++;
}
return (c);
}
