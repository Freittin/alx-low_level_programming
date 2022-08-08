#include <stdarg.h>
#include <stdio.h>
#include <stlib.h>

/**
 * print_numbers - function that prints numbers then a new line
 * @separator: string to be printed between numbers
 * @n: integers to be passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n);

	va_end(numbers);
}
