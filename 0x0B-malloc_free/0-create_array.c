#include "main.h"

/**
 * create_array - creates an array of chars and initializes
 * @size: size of array to be created
 * @c: character initialized with
 * Return: returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0, a < size, a++)
		s[a] = c;

	return (s);
}
