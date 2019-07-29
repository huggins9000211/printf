#include "holberton.h"

int isPrimary(char type)
{

	if (type == 'c')
		return (1);

	else if (type == 's')
		return (1);

	else if (type == 'd')
		return (1);

	else if (type == 'i')
		return (1);

	else if (type == '%')
		return (2);

	else
		return (0);
}
