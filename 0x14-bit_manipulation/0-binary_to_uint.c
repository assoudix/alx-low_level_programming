#include "main.h"
#include <stddef.h>


/**
* binary_to_uint - converts a binary sequence to an unsigned integer
* @b: pointer to a char array representing the binary number
*
* Return: decimal unsigned integer if successful
* 0 if failure
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int decimal = 0;

if (b == NULL)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
decimal = 2 * decimal + (b[i] - '0');
}

return (decimal);
}
