#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *
 * @n: the number tested
 *
 * Return: last digit
 *
 */
int print_last_digit(int n)
{
	/* The code goes here */
	int last_digit = n % 10;

	if (n < 0)
		last_digit *= -1;
	putchar(last_digit + '0');

	return (last_digit);
}
