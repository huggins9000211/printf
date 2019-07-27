#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <malloc.h>

char *numtostr(int x);
{
	char *result;
	int current;
	char currentChar
	int len;
	int copy;
	int counter;

	result = malloc(4 * length)

	len = intlen(x)
	copy = x;
	current = 1;
	counter = 1;
	while (counter <= len)
	{
		current = (copy % 10);
		currentChar = (current + '0');
		result[len - counter] = currentChar;
		copy = (copy / 10)
		counter ++;
	}

}
