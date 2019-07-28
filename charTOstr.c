#include "holberton.h"


char *charTOstr(char result)
{


	char *string;
	string = malloc(2);
	if (string == NULL)
	{
	}
	string[0] = result;
	string[1] = '\0';

	return (string);
}
