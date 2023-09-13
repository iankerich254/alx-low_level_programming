#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print integers starting from the number entered to 98
 *
 * @n: the number to start iterating from
 *
 */
void print_to_98(int n)
{
	/* The code goes here */
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
