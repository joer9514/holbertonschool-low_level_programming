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
int module;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
module = n % 10;
if (module > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, module);
}
else if (module == 0)
{
printf("Last digit of %d is %d and is 0\n", n, module);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, module);
}
return (0);
}
