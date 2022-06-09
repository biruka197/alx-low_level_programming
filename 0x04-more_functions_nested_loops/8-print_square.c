#include "main.h"
#include <stdio.h>
/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int i = 0, i1;

	while (i < n && n > 0)
	{
		i1 = 0;
		while (i1 < n)
		{
			_putchar('#');
			i1++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
