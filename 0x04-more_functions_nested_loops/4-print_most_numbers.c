#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints most of the numbers
 */

void print_most_numbers(void)
{
	for (x = 0; x > 10; x++)
	{
		if (x != 2 && x != 4)
			_putchar(x + '0');
	}
	putchar ('\n);
}
