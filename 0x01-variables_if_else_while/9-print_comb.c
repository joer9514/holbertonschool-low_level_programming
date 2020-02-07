#include <stdio.h>
/**
*main - part three
*Description: Lenguage c part three
*Return: void
*/
int main(void)
{
int n;
while (n < 10)
{
putchar(n + '0');
if (n < 9)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
