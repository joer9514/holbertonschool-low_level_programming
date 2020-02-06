#include <stdio.h>
/**
*main - part three
*Description: Lenguage c part three
*Return: void
*/
int main(void)
{
char l = 'a';
while (l <= 'z')
{
if (l != 'q' && l != 'e')
{
putchar(l);
}
l++;
}
putchar('\n');
return (0);
}
