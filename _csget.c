#include "holberton.h"

char* _csget(str in)
{
	char *nulls;
	/*
	This can have length > 1






	*/
	nulls = "(null)";



	if (in.flag == 'c')

	{
		if (in.va)
			return (in.va);
		else
			return (nulls);
	}

	else if (in.flag == 's')

	{
		if (in.va)
			return (in.va);
		else
			return (nulls);
	}

	else
		return (NULL);


}
