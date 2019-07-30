#include "holberton.h"

int typeChecker(char next)
{
	char *string = "cs";
	char *conv = "box";
	char *num = "di";
/* return 0 if its a number */
/* return 1 if tis a string */
/* return 2 if its % */

	if (isIN(next, string))
		return (1);

	else if (next == '%')
		return (2);

	else if (isIN(next, num))
		return (0);

	else if (isIN(next, conv))
		return (3);
	else
		return (-1);
}
