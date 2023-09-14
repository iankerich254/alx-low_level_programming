#include "main.h"
/**
 * main - prints Fizz for integer divisible by 3 and Buzz for integer divisible
 * by 5 and FizzBuzz for integer divisible by both 3 and 5
 *
 * Return: int
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
