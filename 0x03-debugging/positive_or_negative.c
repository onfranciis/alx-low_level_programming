#include <stdio.h>
/**
* positive_or_negative - Entry Function
*
*/
void positive_or_negative(int n)
{
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
}
