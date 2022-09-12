#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry Function
*
* Return: It always returns success as zero
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("You're on your own");
}

return (0);
}
