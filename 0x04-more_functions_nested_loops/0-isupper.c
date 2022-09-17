#include "main.h"

/**
 * _isupper - Main function
 * @c: character to check
 * Return: Either 0 or 1
 */

int _isupper(int c)
{

    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}