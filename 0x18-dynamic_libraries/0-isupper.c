#include "main.h"

/**
 * _isupper - is_upper function checks for uppercase char.
 * @c: char to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
