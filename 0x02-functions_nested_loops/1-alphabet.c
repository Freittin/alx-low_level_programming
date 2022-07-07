#include <stdio.h>
#include "main.h"

/**
 * print_alphabet -> prints the alphabet, in lowercase
 * Return : Always 0
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a' ; j <= 'z' ; j++)
	{
		putchar (j);
	}
	putchar ('\n');
}
