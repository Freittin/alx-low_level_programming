#include <stdio.h>
#include "main.h"

/**
 * _islower -> checks for lowercase character
 * @c: an argument
 * Return: returns 1 and 0 depending on condition
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
