#include "main.h"

/**
 * swap_int - swaps the values of *a and *b
 * @a: the function's first parameter
 * @b: the function's second parameter
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int place_holder = *a;

	*a = *b;
	*b = place_holder;
}
