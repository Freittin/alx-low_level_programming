#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: param argc
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

