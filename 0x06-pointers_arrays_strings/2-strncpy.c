#include "main.h"

/**
 * _strncpy - ENtry point
 * @dest: destination
 * @src: source
 * @n: input number
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n && src[i] != '\0')
		{
			dest[i] = src[i];
		}
	}

	dest[i] = '\0';

	return (dest);
}
