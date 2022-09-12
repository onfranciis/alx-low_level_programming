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
putchar(alphabet);
alphabet++;
}

alphabet = 'A';
while (alphabet <= 'Z')
{
putchar(alphabet);
alphabet++;
}

putchar('\n');
return (0);
}
