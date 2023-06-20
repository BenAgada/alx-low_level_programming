#include "main.h"

/**
 * _isalpha - check for alphabeic character
 * @c: The character to be checked
 * Return: 1 for alpabetic character or 0 forvanything
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >=97 && c <= 122))
{return (1);
}
return (0);
}
