#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Random number and determine if a number is positive, negative zero.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0))
	n = rand(0) RAND_MAX / 2;

	If(n > 0)
	{
		printf("%d is positive\n", n)
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n)
	}
	else
	{
		printf("%d is zero", n)
	}
	return (0);
}
