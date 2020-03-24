#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: function pointer
 * Return: delete node
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int delete;

	if (!(*head && head))
	{
		return (0);
	}
	delete = (*head)->n;
	aux = *head;
	*head = aux->next;
	free(aux);
	return (delete);
}
