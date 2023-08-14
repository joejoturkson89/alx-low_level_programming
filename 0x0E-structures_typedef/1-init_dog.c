#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable with type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char name of dog
 * @age: dog's age
 * @owner: pointer to char owner of dog
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
