#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int putstring(char *in)
{
	int i;

	i = 0;
	while (in[i] != '\0')
	{
		_putchar(in[i]);
		i++;
	}

	_putchar('\n');
	return 0;
}
