#include <stdlib.h>
#include <time.h>
#includeه <stdio.h>

/**
 *main - Entry pint
 *Discription: 'Check for number if it is positive or negative'
 *Return: always 0
	 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d\n", n, n % 10);
	if (n % 10 > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
	printf("and is 0\n");
	}
	else
	{
	Iprintf("and is less  than 6 and not 0\n");
	}
	return (0);
}
