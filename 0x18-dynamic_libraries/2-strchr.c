#include "main.h"

/**
 * _strchr - It locates a character in a string.
 * @s: potr to the string to be located
 * @c: char to be searched
 *
 * Return: if c is found - return the pointer to the first
 * occurrence.If c is not found - NULL
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
