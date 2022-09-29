#include "main.h"
int lengthc(char *s);
int palindrome(char str[], int st, int end);

/**
 * is_palindrome - entry
 * @s: input
 * Return: Success
 */

int is_palindrome(char *s)
{
	int len;

	len = lengthc(s);
	if (len == 0)
		return (1);
	return (palindrome(s, 0, len - 1));
}

/**
 * lengthc - find leght of string
 * @s: input
 * Return: length
 */

int lengthc(char *s)
{
	if (*s != '\0')
		return (1 + lengthc(s + 1));
	return (0);
}

/**
 * palindrome -  check start and end string
 * @str: string
 * @st: start
 * @end: edn of string
 * Return: return palindrome
 */

int palindrome(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (palindrome(str, st + 1, end - 1));
	return (1);
}
