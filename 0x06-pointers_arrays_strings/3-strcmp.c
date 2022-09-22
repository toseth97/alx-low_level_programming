#include "main.h"

/**
 * _strcmp - function to compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int s;

	for (s = 0; s1[s] != '\0' && s2[s] != '\0'; s++)
	{
		if (s1[s] != s2[s])
			return (s1[s] - s2[s]);
	}

	return (0);
}
