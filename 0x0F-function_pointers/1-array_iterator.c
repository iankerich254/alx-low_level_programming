#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function
 * @size: first parameter
 * @action: second parameter
 * @array: third parameter
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

