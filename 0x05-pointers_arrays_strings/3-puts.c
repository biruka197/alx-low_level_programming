#include "main.h"
/**
 * _puts - Entry Point
 * @str : pointer to a string
 * Return:void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
