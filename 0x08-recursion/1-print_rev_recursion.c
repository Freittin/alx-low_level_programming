#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: source
 * Return: reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_resursion(s + 1);
}
