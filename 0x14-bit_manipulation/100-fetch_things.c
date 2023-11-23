#include "main.h"
/**
 * fetch_things - examine the things
 *
 * Return:return 0 if big endian else, 1 if little endian
 */
int fetch_things(void)
{
unsigned int z;
char *r;

z = 1;
r = (char *) &z;

return ((int)*r);
}
