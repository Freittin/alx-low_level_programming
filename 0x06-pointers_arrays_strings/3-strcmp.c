#include "main.h"
#include <string.h>

/**
 * _strcmp -> function that compares two strings
 * @s1: parameter for string ong
 * @s2: param for string two
 * Return:
 *		returns zero if s1 == s2
 *		returns negative value if s1 < s2
 *		returns positive value if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (i)
	{
		if (s1[i] == '\0' && s2[i] == '\0'
				break;
			else if (s1[i] == '\0'
			{
				diff = s2[i];
				break;
			}
			else if (s2[i] == '\0')
			{
				diff = s1[i];
				break;
			}
			else if (s1[i] != s2[i]
			{
			diff = s1[i] - s2[i];
			break;
			}
			else
			i++;
	}
	return (diff);
}
