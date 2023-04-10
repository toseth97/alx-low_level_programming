#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string
 * @str: String to copy to pointer mem
 * Return: Char success
 */

char *_strdup(char *str)
{
	char *ar = NULL;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	len += 1;

	ar = malloc(len * sizeof(char));

	if (len != 0 && ar != NULL)
	{
		for (i = 0; i < len; i++)
			ar[i] = str[i];
	}
	else
		return (NULL);

	return (ar);
}
