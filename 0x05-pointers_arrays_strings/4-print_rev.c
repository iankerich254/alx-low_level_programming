#include "main.h"
/**
 * print_rev - prints string in reverse followed by a new line
 * @s: the parameter
 * Return: none
 */
void print_rev(char *s)
{
	int counter, strLen;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		counter++;
	}
	strLen = counter;
	counter = 0;
	while (*(s + counter) != '\0')
	{
		_putchar(*(s + (strLen - (counter++ + 1))));
	}
	_putchar('\n');
}

