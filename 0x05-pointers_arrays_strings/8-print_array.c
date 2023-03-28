#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * print_array - prints n elements of an array of integers.
 * @a: integer.
 * @n: integer
 * Return: int
 */
void print_array(int *a, int n)
{
        int i;

        for (i = 0; i < n; i++)
        {
                _putchar("%d", a[i]);
                if (i != (n - 1))
                        _putchar(", ");
        }
        _putchar("\n");
}
