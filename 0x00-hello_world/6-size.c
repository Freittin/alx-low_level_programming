#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
int a;
long int b;
long long int c;
char int d;
float int f;

printf("size of a char : %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int : %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int : %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long long int : %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float : %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
