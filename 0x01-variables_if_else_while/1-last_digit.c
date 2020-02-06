#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - part two conditional
 * Description: part two conditional if
 * Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int modulo = n % 10;
if (modulo > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, modulo);
}
else if (modulo == 0)
{
printf("Last digit of %d is %d and is 0\n", n, modulo);
}
else if (modulo < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, modulo);
}
return (0);
}
