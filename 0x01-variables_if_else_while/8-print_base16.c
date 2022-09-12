#include <stdio.h>
/**
* main - Entry Function
*
* Return: It always returns success as zero
*/
int main(void)
{
char numbers;

numbers = 48;
while (numbers <= 57)
{
putchar(numbers);
numbers++;
}

numbers = 'a';
while (numbers <= 'f')
{
putchar(numbers);
numbers++;
}
putchar('\n');
return (0);
}
