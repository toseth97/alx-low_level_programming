#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: first and the resulting string.
 * @src: strings to add to dest
 * Return: Returs dest
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';

	return (dest);
}
