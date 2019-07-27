#include "holberton.h"

/**
* *_strcat - a function that concatenates two strings
* @s1: the original string
* @s2: the concatenated string
* Return: result of both strings added together
*/

char *_strcat(char *s1, char *s2)
{
	char *result;
	int totaLength;
	int i = 0;
	int counter;


	totalLength = _strlen(dest) + _strlen(src);

	result = malloc(totalLength + 1);
	if (result == NULL)
		return (NULL);

	if (s1 == NULL)
		return (s2);

	while (s1[i] != '\0')

	{
		result[counter] = s1[i];
		counter++;
	}

	i = 0;
	while (s2[i] != '\0')

	{
		result[counter] = s2[i];
		counter++;
        }


	return (result);
}
