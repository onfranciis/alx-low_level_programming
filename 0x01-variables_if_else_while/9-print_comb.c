#include <stdio.h>
/**
* main - Entry Function
*
* Return: It always returns success as zero
*/
int main(void)
{
int i;

i = 48;
while (i <= 57)
{
putchar(i);
putchar(44);
putchar(32);
i++;
}

putchar('\n');
return (0);
}
