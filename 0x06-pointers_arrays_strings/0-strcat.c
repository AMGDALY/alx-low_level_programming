#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to destination input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest arry*/
	while (dest[c])
		c++;

	/*iterate through each src array value without the null nyte*/
	for (c2 = 0; src[2]; c2++)
		/*append src[c2] to dest [c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}
