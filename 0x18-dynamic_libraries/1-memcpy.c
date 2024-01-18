#include "main.h"

/**
 * _memcpy - it copies n bytes from memory area
 * @src to memory area @dest.
 * @dest: ptr to the memory area to cpoy @src to
 * @src: src to copy the char from.
 * @n: number of bytes to copy from @src.
 *
 * Return: returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
