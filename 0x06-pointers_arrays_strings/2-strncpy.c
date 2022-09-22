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
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ == *src++;

	*dest = '\0';

	return (temp);
}
