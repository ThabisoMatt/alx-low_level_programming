#include "main.h"

/*
 * rev_string - reverses a string.
 * @s: input string.
 * Return: return void.
 */
void rev_string(char *s)
{
	int len, i;
	char *a, *b, temp;

	len = strlen(s);
	a = s;
	b = s;

	for (i = 0; i < len - 1; i++)
		b++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *b;
		*b = *a;
		*a = temp;
		a++;
		b--;
	}
}
