#include "main.h"

/**
 * _strpbrk - It locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 * @s: string to be located.
 * @accept: set of bytes to be located.
 *
 * Return: If a byte is matched - a pointer to the matched byte.
 * if no such byte - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			return (s);
		}
		s++;
	}
	return ('\0');
}
