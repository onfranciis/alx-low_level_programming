#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - check the code
 *
 * @s: The string to be printed out
 *
 * Return:  None
 */

void print_rev(char *s)
{ 
int i = 0;

while (*(s + i)) 
i++;  
i = i - 1; 
while (i>=0) 
{ 
putchar (*(s+i)); 
i--; 
} 
putchar ('\n'); 
}
