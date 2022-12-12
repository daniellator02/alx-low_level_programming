
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - display last digit of random numbers
*
* return: Always 0 (success)
*/

int main(void)
{
	int n,l;

	srand(time(0));	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d ", n);
	l = n % 10;
	 printf("is %d ", l);
	if (l > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (l == 0)
	{
		printf("and 0\n");
	}
	else if (l < 6)
	{
	printf("and is less than 6 and not 0\n");
	}

	return (0);

}
