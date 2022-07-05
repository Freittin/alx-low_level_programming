#include <stdio.h>
#include <main.h>

/**
 * _putchar - write the char c to stdout
 * @c : the character to print
 * return : On success 1
 * On error, -1 is returned, and ernno is set appropriately
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
