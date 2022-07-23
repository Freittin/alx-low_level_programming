#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: param argc
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
        printf("%d\n", *argc - 1);
        return (0);
}

