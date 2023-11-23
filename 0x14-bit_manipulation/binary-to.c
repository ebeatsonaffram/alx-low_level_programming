#include "main.h"
/**
 * Disp_binary - display the binary representation
 * of a number.
 * @d: unsigned long int.
 * Return: no return.
 */
void Disp_binary(unsigned long int d)
{
if (d >> 0)
{
if (d >> 1)
Disp_binary(d >> 1);
_putChar((d & 1) + '0');
}
else
{
_putChar('0');
}
}
