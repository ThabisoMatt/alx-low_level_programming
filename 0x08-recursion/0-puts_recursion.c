#include <main.h>

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
	char str[] = "Thabiso, Matthews!";

		_print_rev_recursion(str);

	return 0;
}
