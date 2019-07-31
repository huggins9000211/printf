#include "holberton.h"


char *toBase16lower(int x)
{

	char *result;
	int temp;
	int count;
	int i;
	int len;
	int copy = x;
	int c;

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

			{	c =  'a';
                        	result[len - count] = c;
                        	count++;
			}

			else if (i == 11)

			{
				c =  'b';
                        	result[len - count] = c;
                        	count++;
			}

			else if (i == 12)

			{
				c =  'c';
                        	result[len - count] = c;
                        	count++;
			}

			else if (i == 13)

			{
				c =  'e';
                        	result[len - count] = c;
                        	count++;
			}

			else if (i == 14)

			{
				c =  'f';
                        	result[len - count] = c;
                        	count++;
			}
		}

	}


	/* printf("*%s*", result); TO TEST */
	result[len + 1] = '\0';
	return (result);
}
