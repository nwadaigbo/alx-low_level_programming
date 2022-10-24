#include "main.h"
#include <stdio.h>

/**
 * _strlen: Returns the length of a string
 * @s- String to count
 * 
 * Returns: Length of string
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

