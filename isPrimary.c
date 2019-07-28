#include "holberton.h"

int isPrimary(const char *type)
{

	if (type[0] == 'c')
		return (1);

	else if (type[0] == 's')
		return (1);

	else if (type[0] == 'd')
		return (1);

	else if (type[0] == 'i')
		return (1);

	else
		return (0);
}
