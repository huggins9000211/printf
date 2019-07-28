#include "holberton.h"

char* _csget(str in)
{
	/*
	This can have length > 1






	*/



	if (in.flag == 'c')

	{
		return (in.va);
		printf("this is c\n");
	}

	else if (in.flag == 's')

	{
		return (in.va);
		printf("this is s\n");
	}

	else
		return (NULL);


}
