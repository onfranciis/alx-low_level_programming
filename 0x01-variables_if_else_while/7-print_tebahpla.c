#include <stdio.h>
/**
* main - Entry Function
*
* Return: It always returns success as zero
*/
int main(void)
{
char alphabet;

alphabet = 'z';
while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}

putchar('\n');
return (0);
}
