#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times n is printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
