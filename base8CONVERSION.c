#include "holberton.h"


char *toBase8(int x)
{
	int temp;
	int copy = x;
	int len;
	int count;
	char *result;
	int i;
	char c;

	count = 1;
	len = 0;
	while (copy != 0)

	{
		/* printf("%d", len); TO TEST */
		if (copy != 0)
			len++;
		copy = copy / 8;
	}

	/* printf("*%d*", len); TO TEST */
	result = malloc(len + 1);
	while (x != 0)

	{
		temp = x;
		x = x / 8;


		i = temp % 8;
		c = i + '0';
		result[len - count] = c;
		count++;

	}


	/* printf("*%s*", result); TO TEST*/
	result[len + 1] = '\0';
	return (result);

}
