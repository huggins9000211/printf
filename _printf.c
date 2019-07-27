#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <malloc.h>

int _printf(const char *format, ...)
{
	char *copy;
	char *result;
	char *statemnt;


	int numOrStr;
	int primary;
	int i;
	int x;
	int n;

	n = getNumArgs(char *copy);
	va_list lst;
	va_start(lst, n);

	i = 0;
	x = 1;
	copy = format;
	while (copy[i] != '\0')
	{

		char *next;

		if (copy[i] == '%')
		{
			next = (copy + 1);
			numOrStr = typeChecker(next);

			if (strOrNum)
			{
				if (isPrimary(next))
				{
					Struct num in;
					in.va = va_arg(lst, char *);
					in.mod = next;

					malloc(2);
					statemnt[0] = copy[i];
					mod = copy[i + 1]
				}
			}
			else if(strOrNum == 0)
			{
				if isPrimary()
				{
					Struct num in;
					in.va = va_arg(lst, int *);
					in.mod = next;
				}

			}
			else if(srtOrNum == -1)
			{
				printf("*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n");
			}
		}
	}
}
