#include <stdio.h>

/**
 *  main - script prints alphabets in lower and uppercase
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char lt[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(lt[i]);
	}
	putchar('\n');
	return (0);
}
