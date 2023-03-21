#include <stdio.h>

int main(void)
{
	char lowerCases;
	char upperCases;
	
	for (lowerCases = 'a'; lowerCases <= 'z'; lowerCases++)
	{
		putchar(lowerCases);
	}
	for (upperCases = 'A'; upperCases <= 'Z'; upperCases++)
	{
		putchar(upperCases);
	}
	putchar('\n');
	return (0);
}
