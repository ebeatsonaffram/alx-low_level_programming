#include "main.h"
#include <stdio.h>

/**
 * unit_of_binary - change a binary number to an unsigned int
 * @f: character string
 * Return: return converted decimal number else, 0 if there is an unchangeable character.
 */
unsigned int unit_of_binary(const char *f)
{
unsigned int sum, might;
int dist;

if (f == NULL)
return (0);

for (dist = 0; f[dist]; dist++)
{
if (f[dist] != '0' && f[dist] != '1')
return (0);
}

for (might = 1, sum = 0, dist--; dist >= 0; dist--, might *= 2)
{
if (f[dist] == '1')
sum += might;
}

return (sum);
}

