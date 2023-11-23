#include "main.h"
/**
 * call_bit - calls value of bit at given index.
 * @d: unsigned long int input.
 * @happy: happy index of  bit.
 * Return: return value of the bit.
 */
int call_bit(unsigned long int d, unsigned int happy)
{
unsigned int j;

if (d == 0 && happy < 64)
return (0);

for (j = 0; j <= 63; d >>= 1, j++)
{
if (happy == j)
{
return (d & 1);
}
}

return (-1);
}
