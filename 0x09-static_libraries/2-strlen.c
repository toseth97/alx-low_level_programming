#include "main.h"
/**
 * _strlen - a function that swaps the value of two integer
 * @s: String
 *
 * Return: value returned
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}

	return (sum);
}
