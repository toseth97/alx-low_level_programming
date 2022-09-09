#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));

	/* your code goes there */

	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("The number is positive");
	}
	else 
		if(n < 0)
		{
			printf("The number is negative");
		}
		else
		{
			printf("The number is zero");
		}
	return (0);
}
