#include <stdio.h>

/**
 * main - Entrry point
 *
 * Return: Always 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
		a++;
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}