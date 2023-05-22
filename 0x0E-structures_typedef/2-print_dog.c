#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Entry point
 * Description - 'function printing a struct'
 * @d: pointer containing struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL) /* if pointer d contains nothing, return nothing*/
	{
		return;
	}

	/*If an element of d is NULL, print (nil) instead of this element*/

	if ((*d).name == NULL)
		printf("Name: (nil)\n");

	else
		printf("Name: %s\n", d->name);

	if ((*d).age < 0)
		printf("Age: (nil)\n");

	else
		printf("Age: %f\n", d->age);

	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");

	else
		printf("Owner: %s\n", d->owner);
}
