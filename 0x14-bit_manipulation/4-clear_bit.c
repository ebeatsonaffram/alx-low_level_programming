#include "main.h"
/*
 * clear_bit * at a given index.
 * @n: pointer of an unsigned long int.
 * @index:happy index of the bit.
 * Return:return 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int q;

if (index > 63)
return (-1);

q = 1 << index;

if (*n & q)
*n ^= q;

return (1);
}
