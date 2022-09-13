#include "main.h"

/**
* main - Entry Function
*
* Return: It always returns success as zero
*/

int main(void)
{
int i = 0;
char x;
char y[] = "_putchar\n";

while (i <= 8)
{
x = y[i];
_putchar(x);
i++;
}


return (0);
}
