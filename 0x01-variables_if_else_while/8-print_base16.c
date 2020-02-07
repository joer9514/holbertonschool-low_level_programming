#include <stdio.h>
/**
*main - part three
*Description: Lenguage c part three
*Return: void
*/
int main(void)
{
int n1 = 0;
char L = 'a';
while (n1 < 10)
{
putchar(n1 + '0');
n1++;
}
while (L <= 'g')
{
putchar(L);
L++;
}
putchar('\n');
return (0);
}
