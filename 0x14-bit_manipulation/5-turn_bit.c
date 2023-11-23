#include "main.h"
/**
 * turn_bit - returns num of bits needed to flip from a num to another
 * @d: number one.
 * @q: number two.
 * Return: number of bits.
 */
unsigned int turn_bit(unsigned long int d, unsigned long int q)
{
unsigned int dbits;

for (dbits = 0; d || q; d >>= 1, q >>= 1)
{
if ((d & 1) != (q & 1))
dbits++;
}

return (dbits);
}
