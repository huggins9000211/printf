#include "holberton.h"

char *_diget(num in)
{

	int result;
	char *toString;



	if (in.flag == 'd')

	{
		result = in.va;
		toString = numtostr(result);
		return (toString);
	}

	else if (in.flag == 'i')

	{
		result = in.va;
		toString = numtostr(result);
		return (toString);
	}

	else
		return (NULL);


}
