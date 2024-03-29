#include "main.h"

/**
 * _strcat - this function concatenates two strings.
 * @dest: ptr to the string to be concatenated.
 * @src: source string to be attached.
 *
 * Return: The pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (*(dest + x) != '\0')
	{
		x++;
	}

	while (y >= 0)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}

	return (dest);
}
