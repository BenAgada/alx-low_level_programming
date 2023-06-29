#include "main.h"

/**
 * _strcmp -  Compares pointer to two strings
 * @s1: A pointer to the first string that will be compared
 * @s2: A pointer to the second number that will be compared
 * Return: If str1 < str2, the neg diff of the forst unmatchedcharacter
 * If str1 == str2, 0
 * If str1 > str2, the post diff of the first unmatched character.
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
