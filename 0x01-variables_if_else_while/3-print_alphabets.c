#include <stdio.h>
/**
*main - part three
*Description: Lenguage c part three
*Return: void
*/
int main(void)
{
char l = 'a';
char L = 'A';
while (l <= 'z')
{
putchar(l);
l++;
}
while (L <= 'Z')
{
putchar(L);
L++;
}
putchar('\n');
return (0);
}
