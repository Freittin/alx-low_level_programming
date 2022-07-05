#include<stdio.h>

/**
 * main ->print all the letters except q and e
 * only use the putchar function (every other function
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch != 'q' && ch != 'e'

		{
			putchar(ch);
		}
	}
	putchar ('\n'); /*new line*/
	return (0);
}
