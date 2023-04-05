#include <main.h>

void _print_rev_recursion(char *s)
{
	if (*s == '\0') { // base case: end of string
		return;
	}
	else 
	{
		_print_rev_recursion(s+1); // recursive call to print rest of string
		putchar(*s); // print current character
	}
}
int main()
{
	char str[] = "Thabiso, Matthews!";
	_print_rev_recursion(str);
	return 0;
}
