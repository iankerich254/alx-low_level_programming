#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/* The program goes here */

	char character;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (character = 'a'; character <= 'f'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
