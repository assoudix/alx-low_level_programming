#include "main.h"

/**
* print_binary - prints a string corresponding to the binary of a decimal
* added sizeof to make it more portable
* @n: decimal whose bin form is to be output
*
* Return: nothing
*/
void print_binary(unsigned long int n)
{
int i = 0;
int itervar = 0;
unsigned long int tempvar;

/*for (i = 63; i >= 0; i--)*/
for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
{
tempvar = n >> i;

if (tempvar & 1)
{
_putchar('1');
itervar++;
}
else if (itervar != 0)
_putchar('0');
}
if (itervar == 0)
_putchar('0');
}
