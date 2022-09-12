#include <stdio.h>
/**
* main - Entry Function
*
* Return: It always returns success as zero
*/
int main(void)
{
char alphabet;

alphabet = 'a';
while (alphabet <= 'z')
{
if ((alphabet != 'q') && (alphabet !=  'e'))
{
putchar(alphabet);
alphabet++;
}
else
{
alphabet++;
}
}

putchar('\n');
return (0);
}
