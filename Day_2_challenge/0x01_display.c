#include <stdio.h>

/**
*main - Entry point of a program
*Description: A program that display on the screen
*Return: Always(success)
*/

void display_line(void);
int main(void)
{
display_line();
printf("\n Teach Yourself C In One Hour a Day\n");
display_line();
return (0);
}

/**
*display_line - A function that print asterisk line
*Return: (void)
*/

void display_line(void)
{
int counter;
for (counter = 0; counter < 30; counter++)
	printf("*");
}

/* Question (a): Line: 13, 15, 25, 26, 27*/
/* Question (b): Line: 26 */
/* Question (c): Line: 9 */
/* Question (d): Line: 10, 23 */
/* Question (e): Line: 3, 4, 5, 6, 718, 19, 20, 21*/

