#include "holberton.h"

int isIN(char special, char *string)
{

	int index;

	for (index = 0; string[index] != "\0"; index++)

	{
		if (special == string[index])
			return (1);
	}

	return (0);
}
