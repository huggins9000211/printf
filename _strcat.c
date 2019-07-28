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
	int totalLength;
	int i = 0;
	int counter = 0;

	if (_strlen(s1) == 0)
	{

		printf("Null returned\n");
		return (s2);
	}

	totalLength = _strlen(s1) + _strlen(s2);

	result = malloc(totalLength + 1);
	if (result == NULL)
	{
		printf("Null returned ***\n");
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		result[counter] = s1[i];
		counter++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')

	{
		result[counter] = s2[i];
		counter++;
		i++;
        }

	result[counter] = '\0';
	return (result);
}
