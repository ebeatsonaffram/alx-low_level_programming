#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - change a binary number to an unsigned int
 * @b: character string
 * Return: return converted decimal number else, 0 if there is an unchangeable character.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum, might;
int dist;

if (b == NULL)
return (0);

for (dist = 0; b[dist]; dist++)
{
if (b[dist] != '0' && b[dist] != '1')
return (0);
}

for (might = 1, sum = 0, dist--; dist >= 0; dist--, might *= 2)
{
if (b[dist] == '1')
sum += might;
}

return (sum);
}

