#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int len = 0;
	int n, i;
	char *p = str;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	n = ((len - 1) / 2 + 1);
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
