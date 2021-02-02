#include "sort.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @idx: Position
 * @head: List
 * @n:Parameter to add a new node
 * Return:New node
 */

void change_node_position(listint_t **head, unsigned int idx, unsigned int idx2)
{

}



/**
 * insertion_sort_list - Sort a double linked list
 * @list: a double linked list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *tmp2, *tmp3, *ant;
	int idx = 0, idx2 = 0, count = 0;

	if (!list)
		return;

	tmp = *list;
	tmp2 = *list;

	if ((*list)->n > (*list)->next->n)
	{
		tmp2 = (*list)->next;
		tmp2->next->prev = tmp;
		tmp2->prev = NULL;
		tmp->next = tmp2->next;
		tmp2->next = tmp;
		(*list)->prev = tmp2;
		(*list) = tmp2;
		print_list(*list);
	}

	tmp3 = (*list)->next->next;
	tmp2 = *list;

	while(tmp3->next)
	{
		ant = tmp3->prev;
		while(tmp3->n < ant->n)
		{
			printf("AQUI PASO\n");
			if (ant->prev)
				ant = ant->prev;
			else
				break;
		}
		printf("Antes del while\n");
		if(tmp3->n < ant->next->n)
		{
			printf("ANT EN PREV %d\n",ant->n);
			tmp2 = ant->prev;
			printf(" sldkfnas %d\n", ant->n);
			ant->prev->next = tmp3;
			tmp3->next->prev = ant;
			if (ant->next == tmp3)
			{
				ant->next = tmp3->next;
				tmp3->next = ant;
				ant->prev = tmp3;
				tmp3->prev = tmp2;
			}
			else
			{
				ant->next->prev = tmp3;
				tmp3->next->prev = ant;
				if(ant->next->next == tmp3)
				{
					ant->next->prev = tmp3;
					ant->next->next = ant;
				}
				ant->next = tmp3->next;
				tmp3->next = ant->next;
				tmp3->prev = ant->prev;
				ant->prev = tmp3->next;
			}

		}
		print_list(*list);
		tmp3 = tmp3->next;
		idx++;
	}
	if (tmp3->n < tmp3->prev->n)
	{
		tmp2 = tmp3->prev;
		tmp3->prev->prev->next = tmp3;
		tmp2->next = tmp3->next;
		tmp3->next = tmp2;
		tmp3->prev = tmp2->prev;
		tmp2->prev = tmp3;
	}
}

