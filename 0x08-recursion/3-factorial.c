#include "main.h"

/**
 * factorial - find a factorial of a given number
 * @n: interger to find its factorial
 * Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
