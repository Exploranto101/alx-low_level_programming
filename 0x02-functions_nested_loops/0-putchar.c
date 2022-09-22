#include "main.h"

/**
 * main - this is the main function
 *
 * Return: this is to exit
 */
int main(void)
{
	char holberton[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int i;
	int size = sizeof(holberton) / sizeof(char);

	for (i = 0; i < size; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}
