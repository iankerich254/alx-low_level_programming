#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n - value of the number to be tested
 *
 * Return: 1 if positive, 0 if zero, and -1  if negative
 *
 */

int print_sign(int n)
{
	/* My code goes here */
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-1');
		return (-1);
	} else

}
