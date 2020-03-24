#include "lists.h"

/**
 * free_listint - function that frees
 * @head: function pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
