#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets in lower case and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dj = 'a';
	int DJ = 'A';

	while (dj <= 'z')
	{
		putchar(dj);
		dj++;
	}
	while (DJ <= 'Z')
	{
		putchar(DJ);
		DJ++;
	}

	putchar('\n');
	return (0);
}
