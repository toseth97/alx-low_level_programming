#include "main.h"
int prime_check(int n, int i);
/**
 * is_prime_number - execute prime factor
 * @n: input to check
 * Return: Alwys o;
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_check(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * prime_check - check prime
 * @n: input
 * @i: counter
 * Return: success
 */

int prime_check(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_check(n, i - 1));
}
