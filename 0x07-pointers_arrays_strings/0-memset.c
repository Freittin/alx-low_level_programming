#include "main.h"
#include <string.h>

/**
 * _memset -> function that fills memory with a constant byte
 * @s: param for memory area
 * @b: param for constant byte
 * @n: number of bytes to fill memory area
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n);
{
	insigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
