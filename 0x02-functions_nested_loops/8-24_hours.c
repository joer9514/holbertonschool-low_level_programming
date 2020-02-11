#include "holberton.h"
/**
*jack_bauer - Message return 0
*Description: hours & minutes
*Return: void
*/
void jack_bauer(void)
{
int h = 0;

while (h < 24)
{
int m = 0;
while (m < 60)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
m++;
}
h++;
}
}
