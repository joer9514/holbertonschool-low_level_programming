#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 - Message
*@n: tables
*Return: void
*/
void print_to_98(int n)
{
if (n < 99)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
if (n == 98)
{
printf("\n");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
}
