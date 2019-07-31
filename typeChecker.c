#include "holberton.h"

int typeChecker(char next)
{
	char *string = "cs";
	char *conv = "boxX";
	char *num = "di";


	if (isIN(next, string))
	{
		return (1);
	}
	else if (next == '%')
		return (2);
	else if (isIN(next, num))
		return (0);
	else if (isIN(next, conv))
		return (3);
	else
		return (-1);
}
