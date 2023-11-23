#ifndef __MAIN_H__
#define __MAIN_H__

unsigned int unit_of_binary(const char *f);
void Disp_binary(unsigned long int d);
int _putChar(char b);
int call_bit(unsigned long int d, unsigned int happy);
int fix_bit(unsigned long int *d, unsigned int happy);
int del_bit(unsigned long int *d, unsigned int happy);
unsigned int turn_bit(unsigned long int d, unsigned long int p);
int fetch_things(void);

#endif
