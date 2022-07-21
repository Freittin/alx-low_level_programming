#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: ponter to string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		print_rev_recursion(s + 1);
		putchar(*s);
	}
}
