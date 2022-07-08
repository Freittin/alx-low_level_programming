#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: integer parameter
 */

void print_diagonal(int n)
{
	int x, i;

	for (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
