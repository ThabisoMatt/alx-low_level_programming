#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
void copy_string(char *dest, char *src) 
{
	strcpy(dest, src);
}
int main() 
{
	char src[] = "Hello, world!";
	char dest[20];
	
	copy_string(dest, src);
	putchar("Source string: %s\n", src);
	putchar("Destination string: %s\n", dest);
	
	return 0;
}
