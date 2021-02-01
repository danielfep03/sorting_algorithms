#include "sort.h"

/**
 * insertion_sort_list - Sort a double linked list
 * @list: a double linked list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *tmp2, *tmp3, *tmp4;
	if (!list)
		return;

	tmp = *list;
	tmp2 = *list;

	if ((*list)->n > (*list)->next->n)
	{
		tmp2 = (*list)->next;
		tmp2->prev = NULL;
		tmp->next = tmp2->next;
		tmp2->next = tmp;
		(*list)->prev = tmp2;
		(*list) = tmp2;
		print_list(*list);
	}

	tmp3 = (*list)->next->next;
	tmp2 = *list;
	//while(tmp3->next)
	//{
		if (tmp3->n < tmp3->prev->n)
		{
			tmp2 = tmp3->prev;
			tmp3->prev->prev->next = tmp3;
			tmp3->next->prev = tmp2;
			tmp2->next = tmp3->next;
			tmp3->next = tmp2;
			tmp3->prev = tmp2->prev;
			tmp2->prev = tmp3;
		}
		print_list(*list);
		tmp3 = tmp3->next;
		//tmp3 = tmp4;
	//}
}

