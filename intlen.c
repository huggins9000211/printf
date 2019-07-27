#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <malloc.h>

int intlen(int x);
{
	int current;
	int copy;
	int counter;
	copy = x;
	current = 1;
	counter = 0;
	while (copy != 0)
	{
		copy = (copy / 10);
		counter++;
	}
	return counter;

}
