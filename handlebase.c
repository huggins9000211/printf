

char *handleBASE(char next)
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
	else if (next == 'u')
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
