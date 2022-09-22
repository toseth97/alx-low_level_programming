#include "main.h"

/**
 * _strncat - function that contatenate two string with a speific inde
 * @dest: destination
 * @src: Source
 * @n: Index max
 * Return: returns desti
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
		d++;
	while (s != n)
	{
		dest[d] = src[s];
		if(src[s] == '\0')
			s = n;
		s++;
		d++;
	}

	dest[d] = '\0'

	return (dest);
}
