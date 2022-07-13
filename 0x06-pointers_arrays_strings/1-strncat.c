#include "main.h"
#include <string.h>

/**
 * _strncat -> function to append some charx
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 * Return: string for success
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
