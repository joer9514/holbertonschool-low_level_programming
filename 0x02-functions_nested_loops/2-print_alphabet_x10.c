#include "holberton.h"
/**
*print_alphabet_x10 - Message return 0
*Description: Message and return 0
*Return: 0
*/
void print_alphabet_x10(void)
{
char l;
int n = 0;
while (n < 10)
{
l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
n++;
}
}
