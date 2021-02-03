#include "sort.h"

/**
 * swap - swap nodes
 * @tmp: node to swap
 * @list: list of nodes to swap
 *
*/

void swap(listint_t **tmp, listint_t **list)
{
	listint_t *aux;

	aux = (*tmp)->prev->prev;
	if ((*tmp)->prev->prev)
		(*tmp)->prev->prev->next = *tmp;
	if ((*tmp)->next)
		(*tmp)->next->prev = (*tmp)->prev;
	(*tmp)->prev->next = (*tmp)->next;
	(*tmp)->prev->prev = *tmp;
	(*tmp)->next = (*tmp)->prev;
	(*tmp)->prev = aux;
	if ((*list)->prev)
		*list = (*list)->prev;
}

/**
 * insertion_sort_list - Sort a doubly linked list
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *tmp2;

	if (!list ||!*list || !(*list)->next)
		return;

	tmp = (*list)->next;

	while (tmp)
	{
		tmp2 = tmp;
		while (tmp2->prev && tmp2->n < tmp2->prev->n)
		{
			swap(&tmp2, &(*list));
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
