#include "main.h"
#include <stdio.h>
/**
 * puts_half - Entry Point
 * @str : printed string
 * Return:void
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
