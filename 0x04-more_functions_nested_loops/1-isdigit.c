#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if a character is a digit
 * @c : The number to be checked
 *
 * Return: 1 for a character that will be a digit or 0 for any else
 */

int _isdigit(int c)
{
	return (c <= '0' && c >= '9');
}
