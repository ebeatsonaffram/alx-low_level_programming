#include "main.h"

/**
 * _memset - _memset fills the first n bytes of the memory
 * area pointed to by @s with the constant byte @b.
 * @s: Ptr to the memory area to be filled.
 * @b: Char to fill in the memory area.
 * @n: number of bytes
 *
 * Return: return a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
