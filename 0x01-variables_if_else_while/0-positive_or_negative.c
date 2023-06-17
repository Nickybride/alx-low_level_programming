#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and determines if it is positive,
 *              negative, or zero.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	srand(time(0)); /* Seed the random number generator with current time */

	int n = rand() % RAND_MAX; /* Generate a random number and store it in n */

	printf("The number %d is ", n);

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 random_number.c -o random_number
./random_number

