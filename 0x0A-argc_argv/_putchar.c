#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to ptint
 *
 * Return: success 1
 * error, -1 is returned
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
