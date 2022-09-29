#include "main.h"
int squareroot(int n, int i);

/**
 * _sqrt_recursion - entry
 * squareroot - check perfect square root
 * @n: integer
 * @i: counter
 * Return: ALways 0 (sueccess)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n - 1) / 2));
}

int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
