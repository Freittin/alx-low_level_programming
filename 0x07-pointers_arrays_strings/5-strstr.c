#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main str to be checked
 * @needle: searched in haystack
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declare variable*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*star WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
