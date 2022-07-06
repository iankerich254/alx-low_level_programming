#include "main.h"
/**
 * times_table - returns the multiplication table
 */

void times_table(void)
{
	/* My code goes here */
	int i, j;
	int prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			_putchar(prod + '0');
			_putchar(',');
			_putchar('\t');
		}
	}
}
