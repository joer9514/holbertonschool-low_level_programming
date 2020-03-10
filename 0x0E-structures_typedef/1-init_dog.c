#include "dog.h"
#include <stdio.h>
/**
 * init_dog - exercise
 * @d: pointer
 * @name: var1
 * @age: var2
 * @owner: var3
 * Return: void
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
