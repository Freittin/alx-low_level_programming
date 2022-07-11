#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int pass, sum;

	srand(time(Null));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);

return (0);
}
