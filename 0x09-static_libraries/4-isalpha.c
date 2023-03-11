#include "main.h"

/**
 * _isalpha - Check whether the entry is lower case or captial case
 * @c: contain vlaue to be compared
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
