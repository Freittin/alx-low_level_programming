#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
printf("size of a char : %lu byte(s)\n", int(sizeof(char)));
printf("size of an int : %lu byte(s)\n", int(sizeof(int)));
printf("size of a long int : %lu byte(s)\n", int(sizeof(long int)));
printf("size of a long long int : %lu byte(s)\n", int(sizeof(long long int)));
printf("size of a float : %lu byte(s)\n", int(sizeof(float)));
return (0);
}
