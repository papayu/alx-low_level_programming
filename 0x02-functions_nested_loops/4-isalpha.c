#include "main.h"

/**
 * _isalpha - checks if character is an alphabetic characters.
 * @c: type int character
 * Returns:if c is a letter lower or uppercase 1 and 0 if otherwise.
 */
int _isalpha(int c)
{

if (c >= 'a' && c <= 'z')
	|| (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
