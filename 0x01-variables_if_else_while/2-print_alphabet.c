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

	for (character = 'a'; character <= 'z'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
