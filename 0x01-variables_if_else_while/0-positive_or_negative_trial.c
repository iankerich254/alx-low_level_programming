#include <stdio.h>
#include <time.h>
/* Additional headers go here */

/* Main function goes here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	/* My code goes here */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative", n);
	return (0);
}
