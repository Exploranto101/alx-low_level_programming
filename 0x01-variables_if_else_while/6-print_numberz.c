#include <stdio.h>
/**
 * main - print numbers using putchar
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 1 ; i < 10 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
