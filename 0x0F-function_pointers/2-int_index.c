#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of array based on number of elements
 * @cmp: pointer to the comparison function
 *
 * Return: index of first element
 * -1 if no element is found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
