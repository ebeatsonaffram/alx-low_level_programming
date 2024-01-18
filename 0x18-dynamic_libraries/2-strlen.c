#include "main.h"

/**
 * _strlen - This function returns the length of a string.
 * @s: length of the string to get.
 *
 * Return: length of the string @s.
 */
int _strlen(char *s)
{
	int y = 0;

	while (*s++)
		y++;

	return (y);
}
