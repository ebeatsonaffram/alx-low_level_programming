#include "main.h"
/**
 * set_bit - fix the value of bit to 1.
 * at a given index.
 * @n: pointer of unsigned long int.
 * @index: index of the bit.
 * Return: return 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int q;

if (index > 63)
return (-1);

q = 1 << index;
*n = (*n | q);

return (1);
}
