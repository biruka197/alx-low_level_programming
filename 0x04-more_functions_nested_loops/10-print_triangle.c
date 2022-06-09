#include "main.h"
#include <stdio.h>
/*
 * print_trianle -check for digit
 * return:void
 * 
 */

void print_triangle(int size)
{

	int i = 1, i1;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (i1 < size - i)
		{
			_putchar(' ');
			i1++;
		}
		ii = 0;
		while (i1 < i)
		{
			_putchar('#');
			i1++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
