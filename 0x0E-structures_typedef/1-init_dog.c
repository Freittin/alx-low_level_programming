#include <stdio.h>
#include "dog.h"

/**
 * main - initialize a variable of type struct dog
 * @d: pointer to structure
 * @name: param one/ first member
 * @age: para two
 * @owner: param three
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
