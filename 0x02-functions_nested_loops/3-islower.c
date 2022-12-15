#include "main.h"

/**
 * _islower - Shows 1 if the input is a lowercase while 0 if uppercase
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase characters and 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
