#include "lists.h"
/**
 * check_cycle - function in C to checks if a singly linked list has a cycle.
 * @lists: a pointer to the list
 *
 * Return: 0
 */


int check_cycle(listint_t *list)
{
	if (list == NULL || list->next == NULL)
	{
		return (0);
	}
	listint_t *tortoise = list;
	listint_t *hare = list->next;
	while (hare != NULL && hare->next != NULL)
	{
		if (tortoise == hare)
		{
			return (1);
		}
		tortoise = tortoise->next;
		hare = hare->next->next;
	}
	return 0;
}
