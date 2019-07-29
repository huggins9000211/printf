#include "holberton.h"

char *numtostr(int x)
{
	char *result;
	int current;
	char currentChar;
	int len;
	int copy;
	int counter;
	if (x == (-2147483648))
	{
		result = "-2147483648";
		return (result);
	}

	len = intlen(x);
	if (x < 0)
	{
		result = malloc(len + 2);
		result[0] = '-';
		result[len + 2] = '\0';
		copy = (x * -1);
		counter = 0;
		while (counter < len)
		{
			current = (copy % 10);
			currentChar = (current + '0');
			result[len - counter] = currentChar;
			copy = (copy / 10);
			counter++;
		}

	}
	else
	{
		result = malloc(len + 1);
		result[len + 1] = '\0';
		copy = x;
		counter = 1;
		while (counter <= len)
		{
			current = (copy % 10);
			currentChar = (current + '0');
			result[len - counter] = currentChar;
			copy = (copy / 10);
			counter++;
		}
	}
	return (result);

}
