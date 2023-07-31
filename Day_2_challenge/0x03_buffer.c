#include <stdio.h>
#include <string.h>

/**
 *main - Entry point of a program
 *Description: A program that prompt calculate the length,
 *		of name input by user
 *Return: Always(success)
 */

int main(void)
{
	char buffer[256];
	size_t len;

	printf(" Enter your name and press <Enter>:\n");
	fgets(buffer, 256, stdin);

	len = strlen(buffer);
	printf("\nYour name is %s and has %ld characters and string\n", buffer, len);

	return (0);
}
