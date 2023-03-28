#include "main.h"
/**
 * sawp_int : swap the values of two integers
 *
 * @a : input parameter 1
 * @b : input number 2
 *
 * return : nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
