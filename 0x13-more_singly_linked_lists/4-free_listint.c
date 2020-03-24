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
		free(head);
	}
}
