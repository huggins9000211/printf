#include "holberton.h"

int typeChecker(char next)
{
/* return 0 if its a number */
/* return 1 if tis a string */
/* return 2 if its % */

	if ((next == 'c') || (next == 's'))
		return (1);

	else if ((next == '%'))
		return (2);

	else if ((next == 'd') || (next == 'i'))
		return (0);
	else
		return (-1);
}
