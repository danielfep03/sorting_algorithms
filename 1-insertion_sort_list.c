#include "sort.h"


/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @idx: Position
 * @head: List
 * @n:Parameter to add a new node
 * Return:New node
 */

void swap(listint_t **head, unsigned int idx, unsigned int idx2)
{
	listint_t *list, *store1, *store2, *ant_store1, *ant_store2;
	listint_t *next_store1, *next_store2;
	int num = 0;

	store1 = *head;
	store2 = *head;
	num = idx - 1;
	while(num != 0)
	{
		store1 = store1->next;
		num--;
	}
	num = idx2 - 1;
	while(num != 0)
	{
		store2 = store2->next;
		num--;
	}

	ant_store1 = store1->prev;
	next_store1 = store1->next;
	ant_store2 = store2->prev;
	next_store2 = store2->next;
	ant_store1->next = store2;
	ant_store2->next = next_store2;
	next_store1->prev = ant_store1;
	if (next_store2)
		next_store2->prev = ant_store2;
	if (next_store1 == store2)
	{
		store2->next = store1;
		store1->prev = store2;
	}
	else
	{
		store2->prev = ant_store1;
		store2->next = store1;
		store2->prev = ant_store1;
		store1->prev = store2;
	}
}


/**
 * insertion_sort_list - Sort a double linked list
 * @list: a double linked list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *tmp2, *ant;
	int count = 0, idx = 2, index = 0;

	if(!list)
		return;

	tmp = (*list)->next;
	while(tmp)
	{
		tmp2 = tmp;
		ant = tmp;
		count = 0;
		
		while(tmp2->n < ant->prev->n)
		{
			ant = ant->prev;
			count++;
		}
		if (count >= 1)
		{
			index = idx - count;
			swap(list, index, idx);
			print_list(*list);
			tmp = tmp->next;
		}
		tmp = tmp->next;
		idx++;
	}
}