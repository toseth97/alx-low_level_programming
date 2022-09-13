#include <main.h>

/**
 * main - It ususes the _pputchar to print out.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet()
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		_putchar("%s",&i);
	}
}
