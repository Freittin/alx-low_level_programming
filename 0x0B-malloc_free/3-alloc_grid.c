#include "main.h"

/**
 * alloc_grid - allocating to a two dimension array
 * @width: width of array
 * @height: height of array
 * Return: a pointer of allocated grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height
