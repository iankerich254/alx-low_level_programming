#ifndef _PUTCHAR
#define _PUTCHAR

/*
 * File header declarations
 *
 */

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
#endif
