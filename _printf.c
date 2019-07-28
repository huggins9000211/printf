
#include "holberton.h"

int _printf(const char *format, ...)
{
	const char *copy;
	char *result;
	/*char *statemnt;*/
	char *temp;


	int strOrNum;
	int i;
	int n;
	va_list lst;



	va_start(lst, format);

	i = 0;
	copy = format;
	n = getNumArgs(copy) + 1;
	printf("%d\n", n);
	while (copy[i] != '\0')
	{



		if (copy[i] == '%')
		{
			const char *next = (copy + 1);

			printf("Test\n");


			strOrNum = typeChecker(next);

			if (strOrNum)
			{
				if (isPrimary(next))
				{
					str in;
					printf("Test\n");
					in.va = va_arg(lst, char *);
					in.flag = next[0];

					temp = _csget(in);
					printf("test\n");
					if (i == 0)
					{
						result = temp;
					}
					else
					{
						result = _strcat(result, temp);

					}
					printf("%s    <<<<<<<\n", result);
					putstring(result);
					printf("\n");
					i = i + 2;

					printf("%s ***************\n", result);
				}
			}
			else if(strOrNum == 0)
			{
				if (isPrimary(next))
				{
					num in;
					printf("Test\n");
					in.va = va_arg(lst, int);
					in.flag = next[0];

					temp = _diget(in);
					printf("%d <new len\n", _strlen(temp));
					if (i == 0)
					{
						result = temp;
					}
					else
					{
						result = _strcat(result, temp);

					}
					printf("%d <result len\n", _strlen(result));
					printf("%s    <<<<<<<\n", result);
					putstring(result);
					printf("\n");
					i = i + 2;

					printf("%s ***************\n", result);
				}

			}
			else if(strOrNum == -1)
			{
				printf("*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n");
			}
		}
		/*
		else
		{
			result copy[i]

		}
		*/
	}
	return (0);
}
