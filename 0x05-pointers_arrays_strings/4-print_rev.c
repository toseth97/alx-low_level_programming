#include "main.h"

/**
 * print_rev - print reverse string
 *
 * @s: String to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;
	int coin = 0;

	for (i = 0; s[i] != '\0'; i++)
		coin++;

	for (j = (coin - 1); j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
