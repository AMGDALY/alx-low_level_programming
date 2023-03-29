#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the chracter to print
 * 
 * Return: on success 1,
 * on Error, -1 is returned, nd is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
