#include "main.h"
#include <stdio.h>

/**
 * puts2: Prints every other character of a string, starting with th the first character
 * @s: Character of a string to be printed
 *
 * Return: void
 */

void puts2(char *str)

{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
