#include "holberton.h"

char *numtostr(int x)
{
	char *result;
	int current;
	char currentChar;
	int len;
	int copy;
	int counter;



	len = intlen(x);
	result = malloc(4 * len);
	copy = x;
	current = 1;
	counter = 1;
	while (counter <= len)
	{
		current = (copy % 10);
		currentChar = (current + '0');
		result[len - counter] = currentChar;
		copy = (copy / 10);
		counter ++;
	}
	return (result);

}
