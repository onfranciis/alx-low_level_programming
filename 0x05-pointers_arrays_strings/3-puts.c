#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 *
 * @str: The string to be printed out
 *
 * Return:  None
 */

void _puts(char *str)
{
int x = 0;
while (*(str + x))
{
putchar(*(str + x));
x++;
}
putchar('\n');
}
