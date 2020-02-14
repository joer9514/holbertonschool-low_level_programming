#include <stdio.h>
/**
  * main - fizz buzz
  * Description: fizz
  * Return: void
  */
int main(void)
{
	int rango;

	for (rango = 0; rango < 101; rango++)
	{
		if (rango % 3 == 0 && rango % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (rango % 5 == 0)
		{
			printf("Buzz");
		}
		else if (rango % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", rango);
		}
		if (rango != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
