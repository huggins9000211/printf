#include "holberton.h"

int typeChecker(const char *type)
{
/* return 0 if its a number */
/* return 1 if tis a string */

	if (type[0] == 'c' || type[0] == 's')
		return (1);

	else if (type[0] == 'd' || type[0] == 'i')
		return (0);

	else
		return (-1);
}
