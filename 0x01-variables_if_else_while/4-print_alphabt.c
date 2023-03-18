#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry pint
 *Discription: 'Check for number if it is positive or negative'
 *Return: always 0
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
	return (0);
}
