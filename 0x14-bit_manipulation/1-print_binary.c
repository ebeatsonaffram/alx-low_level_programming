#include "main.h"
/**
 * print_binary - calls value of bit at given index.
 * @n: unsigned long int input.
 * @index: happy index of  bit.
 * Return: return value of the bit.
 */
int print_binary(unsigned long int n, unsigned int index)
{
unsigned int j;

if (n == 0 && index < 64)
return (0);

for (j = 0; j <= 63; n >>= 1, j++)
{
if (index == j)
{
return (n & 1);
}
}

return (-1);
}
