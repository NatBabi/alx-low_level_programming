#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l = 'z'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
