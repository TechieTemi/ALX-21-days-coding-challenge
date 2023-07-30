#include <stdio.h>

/**
 *main - Entry point of the program
 *Description: A program that printf X 1o times, using a loop
 *Return: Always(Success)
 */

int main(void)
{
int x, y;
for (x = 0; x < 10; x++, printf("\n"))
for (y = 0; y < 10; y++)
printf("X");
return (0);
}
