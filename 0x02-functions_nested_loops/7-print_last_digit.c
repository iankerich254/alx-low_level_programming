#include "main.h"
/**
 * print_last_digit - function to compute absolute value of a number
 *
 * n: The number tested
 *
 * Return: last digit value returned
 *
 */

int print_last_digit(int n)
{
	/* My code goes here */
	int last_digit = n % 10;

	if (n < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	
	return (last_digit);
}
