#include "holberton.h"


char *toBase16(int x)
{

	char *result;
	int temp;
	int count;
	int i;
	int len;
	int copy = x;
	char c;

	count = 1;
	len = 0;
	while (copy != 0)

	{
		/* printf("%d", len); TO TEST */
		if (copy != 0)
			len++;
		copy = copy / 16;
	}

	/* printf("*%d*", len); TO TEST */
	result = malloc(len);

	while (x != 0)

	{
		temp = x;
		x = x / 16;


		i = temp % 16;

		if ( i < 10)
		{
			c = i + '0';
			/* printf("%d\n", i); TO TEST */
			result[len - count] = c;
			/* printf("%c\n", c); TO TEST */
			count++;
		}

		else
		{

			if (i == 10)
			{	c =  'A';
                        	result[len - count] = c;
                        	count++;
			}
			else if (i == 11)
			{
				c =  'B';
                        	result[len - count] = c;
                        	count++;
			}
			else if (i == 12)
			{
				c =  'C';
                        	result[len - count] = c;
                        	count++;
			}
			else if (i == 13)
			{
				c =  'E';
                        	result[len - count] = c;
                        	count++;
			}
			else if (i == 14)
			{
				c =  'F';
                        	result[len - count] = c;
                        	count++;
			}
		}

	}


 	result[len + 1] = '\0';
	return (result);
}
