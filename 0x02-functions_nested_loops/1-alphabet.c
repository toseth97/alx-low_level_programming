#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the description
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
