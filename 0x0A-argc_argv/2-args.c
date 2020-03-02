#include  <stdio.h>
/**
 * main - exercise 2
 * Description: return string new line
 * @argc: # de argumentos
 * @argv: argumentos
 * Return: int
 */
int  main(int __attribute__ ((unused)) argc, char *argv[])
{
	short int cont;

	for (cont = 0 ; cont < argc; cont++)
	{
		printf("%s\n", argv[cont]);
	}
	return (0);
}
