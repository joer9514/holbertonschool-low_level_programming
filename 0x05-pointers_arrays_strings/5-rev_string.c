#include "holberton.h"
/**
  * rev_string - rev string
  * @s: var
  * Return: void
  */
void rev_string(char *s)
{
	char *aux = s;

	if (s)
	{
		while (*aux)
		{
			aux++;
		}
		while (s < --aux)
		{
			*s ^= *aux;
			*aux ^= *s;
			*s ^= *aux;
			s++;
		}
	}
}
