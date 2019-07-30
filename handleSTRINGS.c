#include "holberton.h"

char *handleSTR(int i, char next, char *result)
{
	char *temp;


	str in;

	in.flag = next;
	if (in.flag == 'c')

	{
		in.c = (char)(va_arg(lst, int));
	}

	else if (in.flag == 's')

	{
		in.va = va_arg(lst, char *);
	}

	temp = _csget(in);
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
