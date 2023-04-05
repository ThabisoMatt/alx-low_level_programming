#include <main.h>

/**
 * main - enrty
 * return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion('s + 1');
		putchar(*s);
	}
}
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
