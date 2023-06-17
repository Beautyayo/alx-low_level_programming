#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main a program that assign a random number to the variable n each time it is executed.
 * To print whether the number stored in the variable n is positive or negative.
 * Return: Always 0
 */

int main(void)
{
	int n;{
	srand(time(NULL));
	n = rand() % 201 - 100;
	printf("The number: %d\n", n);
	}
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return(0);
}
