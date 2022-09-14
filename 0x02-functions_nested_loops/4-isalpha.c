#include "main.h"

/**
* _isalpha - Returns the decision
* @c: The value to decide on
*
* Return: It always returns success as zero
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}

}
