/*
 * File: 5-sign.c
 * Auth: lawal
 */
#include "main.h"
/**
 * print_sign - Checks if number is positive
 * @c: The characher yto be checked
 *
 * Return: 1 if character is positive
 * Return : 0 if character is zero
 * Return:-1 if character is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		/*return 1 for positive */
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		/* return 0 for zeror*/
		_putchar(0);
		return (0);
	}
	else
	{
		/* return -1 for negative*/
		_putchar('-');
		return (-1);
	}
}
