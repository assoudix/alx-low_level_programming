#include "main.h"

/**
* get_bit - gets the value of an inedexed in a binary
* @n: number to search
* @index: bit index
*
* Return: bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
int index_bit;

if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);

index_bit = (n >> index) & 1;

return (index_bit);
}

