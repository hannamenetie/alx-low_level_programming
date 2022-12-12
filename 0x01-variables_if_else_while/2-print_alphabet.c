#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - This prints the alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dj = 'a';

	while (dj <= 'z')
	{
		putchar(dj);
		dj++;
	}
	putchar('\n');
	return (0);
}
