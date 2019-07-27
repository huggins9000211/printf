#include "holberton.h"

/**
* _strlen -  a function that returns the length of a string
* @s: pointer to the length
* Return: 0
*/


int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')

	{
		length++;
	}

	return (length);
}
