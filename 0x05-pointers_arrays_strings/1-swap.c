#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * @a: The first integer
 *
 * @b: The second integer
 *
 * Return:  None
 */

void swap_int(int *a, int *b)
{
int x = *a;
int y = *b;

*a = y;
*b = x;
}
