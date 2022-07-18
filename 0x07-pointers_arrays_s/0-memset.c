#include "main.h"

/**
 * _memset -> function that fills memory with a constant byte
 * @s: param for memory area
 * @b: param for constant byte
 * @n: nmber of bytes to fill memory area
 * Return: memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n ; a++)
	{
		s[a] = b;
	}
	return (s);
}
