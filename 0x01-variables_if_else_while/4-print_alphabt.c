#include <stdio.h>

int main(void)
{
	char lowerCases;
	char upperCases;
	
	for (lowerCases = 'a'; lowerCases <= 'z'; lowerCases++)
	{
	if (lowerCases == 'q' || lowerCases == 'e')
		continue;
	putchar(lowerCases);
	}
	putchar('\n');
	return (0);
}
