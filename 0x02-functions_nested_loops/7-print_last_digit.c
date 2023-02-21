#include "main.h"

/**
 * print_last_digit - print out the last digit of the entered number
 * @n: contain the value that will be compared
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int lastd;

	if (n < 0)
	{
		n = n * -1;
		lastd = n % 10;
		return (lastd);
	}
	else
	{
		lastd = n % 10;
		return (lastd);
	}
}
