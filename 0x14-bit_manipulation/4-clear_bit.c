#include "main.h"

/**
* clear_bit - clears the indexed bit
* @n: ptr to unsigned int to be altered
* @index: index of the bit to set to 0 using mask
*
* Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
