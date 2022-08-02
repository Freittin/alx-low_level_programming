#ifndef STRTYP
#define STRTYP

/**
 * struct dog - structure of doge
 * @name: name of dog
 * @age: age of dog
 * @owner: my name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog Dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
