#include<stdio.h>

/**
 * main ->prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line
 * Return: always 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; ch <= 'Z'; ch++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
