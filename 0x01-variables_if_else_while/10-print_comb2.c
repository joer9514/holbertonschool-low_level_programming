#include <stdio.h>
/**
*main - part three
*Description: Lenguage c part three
*Return: void
*/
int main(void)
{
int n1;
int b, c;
n1 = 0;
while (n1 < 100)
{
b = n1 / 10;
c = n1 % 10;
putchar(b + '0');
putchar(c + '0');
if (n1 < 99)
{
putchar(',');
putchar(' ');
}
n1++;
}
putchar('\n');
return (0);
}
