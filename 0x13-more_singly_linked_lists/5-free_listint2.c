#include "lists.h"

/**
  * free_listint2 - function that frees
  * @head: double pointer
  * Return: void
  */
void free_listint2(listint_t **head)
{
	if (head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
