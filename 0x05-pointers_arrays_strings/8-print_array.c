#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array of n elements
 * @a: array to be read from
 * @n: number of elements to be read
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}

