#include "main.h"

#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: is destiny
 * @src: is copier
 *
 * Return:  the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
		return (start);
}
