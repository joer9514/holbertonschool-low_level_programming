#include <stdio.h>
#include <stdlib.h>
/**
 * main - exercise 3
 * Description: return mult int
 * @argc: # de argumentos
 * @argv: argumentos
 * Return: int
 */
int  main(int argc, char *argv[])
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (1);
}
