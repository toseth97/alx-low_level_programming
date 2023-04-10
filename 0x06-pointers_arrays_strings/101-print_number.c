#include "main.h"

/**
 * print_number - prints out integers
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int integer;

	if (n < 0)
	{
		integer = -n;
		_putchar('-');
	}
	else
		integer = n;

	if (integer / 10)
		print_number(integer / 10);

	_putchar((integer % 10) + '0');
}
