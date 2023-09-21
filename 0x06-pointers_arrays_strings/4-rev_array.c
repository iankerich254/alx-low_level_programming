#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: first parameter
 * @n: second parameter
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	temp = 0;
	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

