#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name using a given function
 * @name: name to print
 * @f: pointer to function that prints the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		int i = 0;

		while (name[i] != '\0')
		{
			f(name[i]);
			i++;
		}
	}
}
