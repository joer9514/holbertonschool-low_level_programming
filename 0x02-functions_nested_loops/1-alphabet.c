#include "holberton.h"
/**
*print_alphabet - Message return 0
*Description: Message and return 0
*Return: 0
*/
char print_alphabet(void)
{
char l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
return (0);
}
