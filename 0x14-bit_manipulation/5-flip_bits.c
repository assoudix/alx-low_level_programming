#include "main.h"

/**
 * flip_bits - gives # of bits to change to go from n to m
 * to get from one number to another
 * @n: the one and only n
 * @m: the one and only m
 *
 * Return: total bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0;
int  bit_number = 0;
unsigned long int shifted_xor_nm;
unsigned long int xor_nm = n ^ m;
int max = sizeof(unsigned long int) * 8 - 1;
for (i = max; i >= 0; i--)
{
shifted_xor_nm = xor_nm >> i;
if (shifted_xor_nm & 1)
bit_number++;
}

return (bit_number);

}

