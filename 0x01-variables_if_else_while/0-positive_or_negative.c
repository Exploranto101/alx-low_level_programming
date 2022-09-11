#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number if positive or negative
 *
 * Return: ends the program
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
	{
		printf(n "is positive");
	}
	else if(n == 0)
	{
		printf(n "is Zero");
	}
	else if(n < 0)
	{
		printf(n "is negative\n");
	}
	return (0);
}
