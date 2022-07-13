#include "main.h"
#include <string.h>

/**
 * _strncpy -> function that copies a string
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 * Return: string as success
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
