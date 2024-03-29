#include "main.h"

/**
 * _atoi - _atoi converts a string to an integer.
 * @s: String to converted.
 * Return: integer
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int y = 0;

	do {
		if (*s == '-')
			x *= -1;

		else if (*s >= '0' && *s <= '9')
			y = (y * 10) + (*s - '0');

		else if (y > 0)
			break;
	} while (*s++);

	return (y * x);
}
