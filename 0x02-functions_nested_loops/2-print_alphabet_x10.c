/*
 * main - Entry point
 *
 */

#include "main.h"

/*
 * Description -  Print a - z 10x
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter = 'a';

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
