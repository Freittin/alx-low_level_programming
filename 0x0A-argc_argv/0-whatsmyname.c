#include <stdio.h>

/**
 * main - function to print its name
 * @argc: param argc
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
