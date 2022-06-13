#include "main.h"
#include <stdio.h>
/**
 * print_rev - Entry Point
 * @s : the reversed string
 * Retrun:void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	i++;
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');

}
