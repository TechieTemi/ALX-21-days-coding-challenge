#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


/**
 *do_it - A function that print output
 *@str: Takes in only a char parameter as argument
 */

void do_it(const char *str)
{
ssize_t len = strlen(str);
write(2, str, len);
}


/**
 *main - Entry point of our program
 *Description: A program that look for a way to make,
 *              the code work.
 *Return: Always(Success)
 *
 */

int main(void)
{
printf("This is a program with a ");
do_it("problem!");
putchar('\n');
return (0);
}
