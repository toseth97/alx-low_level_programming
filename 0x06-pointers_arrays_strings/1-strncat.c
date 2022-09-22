#include "main.h"

/**
 * _strncat - function that contatenate two string with a speific index
 * @dest: destination
 * @src: Source
 * @n: Index max
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;

	while (dest[d] != '\0')
		d++;
	while (s != n)
	{
		dest[d] = src[s];
		s++;
		d++;
	}

	return (dest);
}
