#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n); //case of n greater than 0
	} else if (n == 0)
	{
		printf("%d is zero\n", n); //case of n ecual 0
	} else if (n < 0)
	{
		printf("%d is negative\n", n); //case of n lesser than 0
	}
	return (0);
}
