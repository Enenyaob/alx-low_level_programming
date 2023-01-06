#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 *
 * @i: input of an integer number
 *
 * Return: absolute value of integer
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
