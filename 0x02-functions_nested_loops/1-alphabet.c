/**
 * main- Entry
 *
 */

#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet: Prints the character and add next line
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
