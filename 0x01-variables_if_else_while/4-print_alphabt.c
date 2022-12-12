#include <stdio.h>
#include <stdlib.h>

/**
 * main - return alphabets both except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char dj = 'a';

	while (dj <= 'z');
	{
		if ((dj != 'e') && (dj != 'q'))
		{
			putchar (dj);
		}
		dj++;
	}
	putchar('\n');
	return (0);
}
