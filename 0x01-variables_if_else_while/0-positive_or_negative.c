#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program to assign a random number to a variable
 *  The variable is n
 *  Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
Printf("%d is positive\n", n);
else if (n == 0)
printf("%d is positive\n", n)
else
printf("%d is negative\n", n)
return (0);
}
