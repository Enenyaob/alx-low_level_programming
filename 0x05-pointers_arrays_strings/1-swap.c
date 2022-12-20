#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer input
 * @b: second integer input
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
