#include "holbeton.h"

int *handleNUM(int i, char next, char *result)
{
	char *temp;

	num in;
	in.va = va_arg(lst, int);
	in.flag = next;


	temp = _diget(in);
	if (i == 0)

	{
		result = temp;
	}

	else

	{
		result = _strcat(result, temp);
	}

	i = i + 2;


	return (i);
}
