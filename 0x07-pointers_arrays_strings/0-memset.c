#include "main.h"

/**
 * _memset - ENtry point
 *
 * @s: pointer destination
 * @b: constant byte
 * @n: bytes
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (0);
}
