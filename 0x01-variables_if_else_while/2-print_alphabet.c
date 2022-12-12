#include <stdio.h>
/**
 *  main - script to print alphabets to lowercase
 *
 *  Return: Alway 0 (Success)
 */

int main(void)
{
	char lt[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lt[i]);
	}
	putchar('\n');
	return (0);
}
