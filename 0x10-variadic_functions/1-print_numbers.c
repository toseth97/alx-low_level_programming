#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, const unsigned int));
		}
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, const unsigned int));

		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
