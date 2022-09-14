#include "main.h"

/**
* print_sign - Returns the decision
* @n: The value to decide on
*
* Return: It always returns success as zero
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
