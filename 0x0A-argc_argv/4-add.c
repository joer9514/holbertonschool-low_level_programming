#include <stdio.h>
#include <stdlib.h>
/**
 * main - exercise 4
 * @argc : argument
 * @argv : argumetn
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, acu = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			acu += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", acu);
	return (0);
}
