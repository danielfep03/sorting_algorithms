#include "sort.h"

/**
 * insertion_sort_list - Sort a double linked list
 * @list: a double linked list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *tmp2, *tmp3;
	if (!list)
		return;

	tmp = *list;
	tmp2 = *list;
	tmp3 = *list;

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

	//while(tmp3->next)
	//{
	//	tmp = tmp3;
	//	if(tmp->n > tmp->next->n)
	//	{
	//		tmp2->next = tmp->next;
	//		tmp2->prev = tmp->next->prev;
	//		tmp->next = tmp->next->next;
	//		tmp->prev = tmp->next;
	//		tmp2->next = tmp;
	//	}
		//print_list(*list);
		//tmp3 = tmp3->next;
	}
//}

