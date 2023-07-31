#include <stdio.h>

/**
 *main - Entry point of a program
 *Description: A program that print the alphabet using the ascii code
 *Return: Always(success)
 */

int main(void)
{
	int ctr;

	for (ctr = 65; ctr < 91; ctr++)
		printf("%c", ctr);

	return (0);
}
