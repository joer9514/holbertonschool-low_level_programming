#include <stdio.h>
int main(void)
{
	int n;
	int div;
	int mod;

	n = 0;
	for (; n < 100; n++)
	{
		mod = n % 10;
		div = n / 10;
		if (div != mod && div < mod)
		{
			putchar(div + '0');
			putchar(mod + '0');
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
