#include "main.h"

/**
 * leet - entry
 * ONE if, Two loops only;
 * @n: input
 *
 * Return: 0;
 */

char *leet(char *n)
{
	int i, x;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int change[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == find[x])
			{
				n[i] = change[x / 2];
				x = 9;
			}
		}
	}

	return (n);
}
