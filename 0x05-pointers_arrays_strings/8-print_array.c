#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * Description: prints n elements of an array of integers.
 * @a: integer.
 * @n: integer
 * Return: int
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	if (i == (n - 1))
	{
		 printf("%d", a[n - 1]);
	}
	printf("\n");
}
