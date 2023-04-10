#include "main.h"

/**
 * rot13 - Entry point
 *
 * One if, WO loops only
 *
 * @n: input
 *
 * Return: decrypted string
 */

char *rot13(char *n)
{
	int i, j;

	char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char second[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghujklm";


	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; first[j] != '\0'; j++)
		{
			if (n[i] == first[j])
			{
				n[i] = second[j];
				break;
			}
		}
	}

	return (n);
}
