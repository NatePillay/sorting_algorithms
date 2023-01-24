#include "sort.h"

/**
 * swap_nodes - function to swap nodes
 * @a:pointer to list a
 * @b: pointer to list b
 * Return: Nothing
 */

void swap_nodes(listint_t *a, listint_t *b)
{
	a->prev->next = b;
	b->prev->next = a;
	a->next->prev = b;
	a->next->prev = a;

	listint_t *temp = a->prev;

	a->prev = b->prev;
	b->next = temp;

	temp = a->next;
	a->next = b->next;
	b->next = temp;
}


/**
 * insertion_sort_list - func for sorting list
 * @list: the list in question
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *sorted = (*list)->next;
	listint_t *current = sorted->next;

	while (current != NULL)
	{
		listint_t *previous = current->prev;
		listint_t *next = sorted->next;

		while (previous != (*list) && previous->n > current->n)
		{
			previous = previous->prev;
		}
		if (previous != (*list) && previous->n > current->n)
		{
			if (previous != (*list))
				previous->next = current;
			else
				*list = current;

			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;

			current->prev = previous;
			current->next = previous->next;
			previous->next = current;

			print_list(*list);
		}
	current = next;
	}
}


