#include "main.h"
/**
del_bit * at a given index.
 * @d: pointer of an unsigned long int.
 * @happy:happy index of the bit.
 * Return:return 1 if it worked, -1 if it didn't.
 */
int del_bit(unsigned long int *d, unsigned int happy)
{
unsigned int q;

if (happy > 63)
return (-1);

q = 1 << happy;

if (*d & q)
*d ^= q;

return (1);
}
