#include "main.h"

/**
 * _islower - Cheak whether the entry is lower case or not
 * @c: contain vlaue to be compared
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
