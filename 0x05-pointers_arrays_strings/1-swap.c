#include "main.h"

/**
 * swap_int - swap the vlaue of a with b.
 *
 * @a: first integer.
 * @b: second integer.
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
