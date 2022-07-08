#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers
 *
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar(x + '0');
	putchar('\n');
}
