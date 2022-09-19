#include "main.h"

/**
 * swap_int - It Swaps the value of a pointer with the other
 *
 * @a: pointer a
 *@b: pointer b
 *
 * Retrn: none
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
