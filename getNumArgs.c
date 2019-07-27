#include "holberton.h"

int getNumArgs(char *copy)
{

	int iterate;
	int counter = 0;

	for (iterate = 0; copy[iterate] != "\0"; iterate++)

	{
		if (copy[iterate] == "%")
			counter = counter + 1;
	}

	return (counter);
}
