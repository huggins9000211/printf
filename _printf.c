
#include "holberton.h"

int _printf(const char *format, ...)
{
	const char *copy;
	char *result;
	/*char *statemnt;*/
	char *temp;


	int strOrNum;
	int i;
	va_list lst;



	va_start(lst, format);

	i = 0;
	copy = format;
	/*
	n = getNumArgs(copy) + 1;
	*/
	while (copy[i] != '\0')
	{



		if (copy[i] == '%')
		{
			char next = copy[i + 1];



			strOrNum = typeChecker(next);

			if (strOrNum == 1)
			{
				if (isPrimary(next))
				{
					str in;
					in.va = va_arg(lst, char *);
					in.flag = next;

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

				}
			}
			else if(strOrNum == 0)
			{
				if (isPrimary(next))
				{
					num in;
					in.va = va_arg(lst, int);
					in.flag = next;

					temp = _diget(in);
					if (i == 0)
					{
		/* condition */			result = temp;
					}
					else
					{
						result = _strcat(result, temp);

					}
					i = i + 2;

				}

			}
			else if(strOrNum == 2)
			{
				temp = charTOstr('%');
				if (i == 0)
				{
					result = temp;
					i = i + 2;
				}
				else
				{
					result = _strcat(result, temp);
					i = i + 2;
				}
			}
			else if(strOrNum == -1)
			{
				return (0);
			}
		}

		else
		{
			if (i == 0)
			{
				temp = charTOstr(copy[i]);
				result = temp;
				i++;
			}
			else
			{

				temp = charTOstr(copy[i]);
				result = _strcat(result, temp);

				i++;
			}



		}
	}
	putstring(result);
	return (_strlen(result));
}
