#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @in: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int putstring(char *in)
{
	int i;
	int result;
	i = _strlen(in);

	result = write(1, in, i);
	return result;
}
