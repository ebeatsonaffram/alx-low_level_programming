#include "main.h"
/**
 * fix_bit - fix the value of bit to 1.
 * at a given index.
 * @d: pointer of unsigned long int.
 * @happy: index of the bit.
 * Return: return 1 if it worked, -1 if it didn't.
 */
int fix_bit(unsigned long int *d, unsigned int happy)
{
unsigned int q;

if (happy > 63)
return (-1);

q = 1 << happy;
*d = (*d | q);

return (1);
}
