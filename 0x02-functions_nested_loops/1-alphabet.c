#include "main.h"

/**
* main - Entry Function
*
* Return: It always returns success as zero
*/

void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
