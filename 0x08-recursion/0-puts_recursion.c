#include "main.h"

/**
 * _print_rev_recursion - prints a string followed by a new line
 * @s: source
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
