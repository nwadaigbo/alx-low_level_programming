#include "main.h"
#include <stdio.h>

/**
 * print_array: Prints n elemen of a array of integers
 * @a: Array of integers
 * @b: The number of elements to be prnted
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}

