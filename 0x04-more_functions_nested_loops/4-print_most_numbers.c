#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints most of the numbers except 2 and 4
 */

void print_most_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		if ((number == 50 || number == 52))
		{
			continue;
		}
			_putchar(number);
	}
	putchar ('\n);
}
