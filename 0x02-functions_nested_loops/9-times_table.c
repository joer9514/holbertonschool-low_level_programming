#include "holberton.h"
/**
*times_table - Message return 0
*Description: tables
*Return: void
*/
void times_table(void)
{
int i, j, ope;

for (i = 0; i <= 9; i++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (j = 1; j <= 9; j++)
{
ope = (i * j);
if ((ope / 10) > 0)
{
_putchar((ope / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((ope % 10) + '0');
if (j < 9)

{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
