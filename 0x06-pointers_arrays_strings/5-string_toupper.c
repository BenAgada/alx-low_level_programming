#include "main.h"

/**
 * string_toupper - Changes all the lower case letter
 * of a string to uppercase letters.
 * @str: This is the string to be changed.
 * Return: A pointer to changed string.
 *
 */

char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'Z')
str[index] -= 32;
index++;
}
return (str);
}
