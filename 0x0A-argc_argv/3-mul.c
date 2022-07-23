#include "main.h"
#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: param argc
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
int result = 0, num1, num2;

if (argc != 3)
{
	printf("%s\n", "Error");
	return (1);
}
num1 = atoi argv[1];
num2 = atoi argv[2];
result = num1 * num2;

printf("%d\n", result);
return (0);
}
