#include "holberton.h"

int _printf(const char *format, ...)
{
	const char *copy;
	char *result;
	/*char *statemnt;*/
	char *temp;


	int strOrNum;
	int i;
	int x;
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

					if (next == 'c')
					{
						in.flag = next;
						in.c = (char)(va_arg(lst, int));
					}
					else if (next == 's')
					{
						in.flag = next;
						in.va = va_arg(lst, char *);
					}
					/*
					else if (next == 'S')
					{
						in.flag = next;
						in.va = va_arg(lst, char *);
					}
					*/

					temp = _csget(in);
					printf("%sTest<<<<<<<<\n", temp);
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

			else if(strOrNum == 3)
			{
				x = va_arg(lst, int);

				if (next == 'b')
				{
					temp = toBase2(x);
					if (i == 0)
					{
						if (x == 0)
						{
							result = _strcat(result, "0");
							i = i + 2;
						}
						else
						{
							result = temp;
							i = i + 2;
						}

					}
					else
					{
						if (x == 0)
						{
							result = _strcat(result, "0");
							i = i + 2;
						}
						else
						{
							result = _strcat(result, temp);
							i = i + 2;
						}
					}
				}
				else if (next == 'o')
				{

					temp = toBase8(x);
					if (i == 0)
					{
						if (x == 0)
						{
							result = _strcat(result, "0");
							i = i + 2;
						}
						else
						{
							result = temp;
							i = i + 2;
						}

					}
					else
					{
						if (x == 0)
						{
							result = _strcat(result, "0");
							i = i + 2;
						}
						else
						{
							result = _strcat(result, temp);
							i = i + 2;
						}
					}
				}
                                else if (next == 'x')
                                {
                                        temp = toBase16lower(x);
                                        if (i == 0)
                                        {
                                                if (x == 0)
                                                {
                                                        temp = "0";
                                                        result = _strcat(result, "0");
                                                        i = i + 2;
                                                }
                                                else
                                                {
                                                        result = temp;
                                                        i = i + 2;
                                                }

                                        }
                                        else
                                        {
                                                if (x == 0)
                                                {
                                                        result = _strcat(result, "0");
                                                        i = i + 2;
                                                }
                                                else
                                                {
                                                        result = _strcat(result, temp);
                                                        i = i + 2;
                                                }
                                        }
                                }
				else if (next == 'X')
				{
					temp = toBase16(x);
					if (i == 0)
					{
						if (x == 0)
						{
							temp = "0";
							result = _strcat(result, "0");
							i = i + 2;
						}
						else
						{
							result = temp;
							i = i + 2;
						}

					}
					else
					{
						if (x == 0)
						{
							result = _strcat(result, "0");
							i = i + 2;
						}
						else
						{
							result = _strcat(result, temp);
							i = i + 2;
						}
					}
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
