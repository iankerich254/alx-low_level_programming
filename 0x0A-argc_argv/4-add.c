#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: first parameter
 * @argv: second parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2 = 0, i, c = 0;

	for (i = 1; i < argc; i++)
	{
		num1 = 0;
		for (c = 0; argv[1][c]; c++)
		{
			if ((argv[i][c] <= '9') && (argv[i][c] >= '0'))
			{
				num1 = (num1 * 10) + (argv[i][c] - '0');
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		num2 += num1;
	}
	printf("%d\n", num2);
	return (0);
}

