#include "main.h"

/**
 * _strncpy - copies at most an inputed no.
 * of bytes from string into dest'
 * @dest: The buffer that stores the string copy.
 * @src: The sorce string
 * @n: The max no. of byte to be copied from src.
 * Return: A pointer to the resulting string dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_length = 0;

	while (src[index++])
	src_length++;
	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = 0;  index < n; index++)
	dest[index] = '\0';

	return (dest);
}
