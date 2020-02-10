#include "holberton.h"
/**
*print_last_digit - Message return 0
*@c: Message and return 0
*Return: 0
*/
int print_last_digit(int c)
{
int modulo = c % 10;
if (modulo < 0)
{
modulo *= -1;
}
_putchar(modulo + '0');
return (modulo);
}
