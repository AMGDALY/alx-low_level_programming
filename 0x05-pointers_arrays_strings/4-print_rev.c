#include "main.h"

/**
 * print_rev - prints reversed string, followed by  new line
 * @s: pointer to the string to print
 * return: void
 */

void print_rev(chr *s)
{
	int i = 0;

	while (s[i])
	i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchr('\n');
