#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: pointer head
 * @n: constant var
 * Return: end node of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *p;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = end_node;
	}
	return (end_node);

}
