#include <stdio.h>
#include "main.h"

/**
 * _islower -> checks for lowercase character
 * Return: returns 1 and 0 depending on condition
 */

int _islower(int c)
{
	putchar (c >= 'a' && c <= 'z');
}
