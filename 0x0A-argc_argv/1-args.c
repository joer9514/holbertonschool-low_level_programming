#include <stdio.h>
/**
 * main - exercise 1
 * Description: return lenght string
 * @argc: argument
 * @argv: argument
 * Return: int
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	short int cont;

	for (cont = 0; cont < argc; cont++)
	{
		if (cont + 1 == argc)
			printf("%d\n", cont);
	}
	return (0);
}
