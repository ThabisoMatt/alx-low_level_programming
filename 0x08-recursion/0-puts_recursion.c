#include <main.h>

/**
 * main - enrty
 * return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') 
	{
		putchar('\n');
	return;
	}
	else
	{
		putchar(*s)

		_puts_recursion(s + 1);
	}
}
int main()
{
	char str[] = "hello, world!";
	_puts_recursion(str);
	return 0;
}
