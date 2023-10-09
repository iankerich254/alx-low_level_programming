#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: char name
 * @age: int age
 * @owner: char owner
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *mbwa;
	int i, j, k;
	char *n, *o;

	mbwa = malloc(sizeof(struct dog));
	if (mbwa == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(mbwa);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(mbwa);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];
	mbwa->name = n;
	mbwa->age = age;
	mbwa->owner = o;
	return (mbwa);
}

