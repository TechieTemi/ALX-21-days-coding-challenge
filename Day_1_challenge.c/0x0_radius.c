#include <stdio.h>


/**
 *main - Entry point of the program
 *Description: A program that calculate the radius of an area
 *Return: Always(Success)
 */

int main(void)
{
/* Undeclared and uninitialized variable was used*/
/* I declared and initialized the variable that was used */
int radius = 0;
int area = 0;
printf(" Enter radius (i.e. 10): ");
scanf("%d", &radius);
area = (int) (3.14159 * radius * radius);
printf("\n\nArea = %d\n", area);
return (0);
}
