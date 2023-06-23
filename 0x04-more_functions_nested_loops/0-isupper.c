#include "main.h"
/**
 *  _isupper - detects uppercase letters
 *
 *  @c: input characters
 *
 *  Return:(1) for true, (0) for anything else
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
