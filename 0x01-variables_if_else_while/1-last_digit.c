#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry Function
*
* Return: It always returns success as zero
*/
int main(void)
{
int n;
int r;

srand(time(0));
n = rand() - RAND_MAX / 2;

r = n%10;

if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, r);
}else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, r);
}else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, r);
}
else
{
printf("None of my parameters were met");
}

return (0);
}