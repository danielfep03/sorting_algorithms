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
	printf("\n\n AUXILIAR: %d\n\n", aux->n);
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

	if (!*list || !(*list)->next)
		return;

	tmp = (*list)->next;

	while (tmp)
	{
		tmp2 = tmp;
		while (tmp2->prev && tmp2->n < tmp2->prev->n)
		{
			swap(&tmp2, &(*list));
			print_list(*list);
<<<<<<< HEAD
=======
			tmp2 = tmp;
			printf("==============\nTMP2 = %d, PREV %d, NEXT %d\n==============\n", tmp2->n, tmp2->prev->n, tmp2->next->n);
			while(tmp2->n < tmp2->prev->n)
			{
				swap(&tmp2);
				tmp2 = tmp->prev;
				print_list(*list);
				printf("\n%d\n", tmp2->n);
				printf("====WHILE====\nTMP2 = %d, PREV %d, NEXT %d\n==============\n", tmp2->n, tmp2->prev->n, tmp2->next->n);
			}
>>>>>>> b3743613b20b0909f76583779fd886c2e32833bd
		}
		tmp = tmp->next;
	}
}
