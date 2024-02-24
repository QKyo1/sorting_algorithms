#include "sort.h"

/**
* insertion_sort_list - a function to sort double linked list
* @list: lists y3ny 7 tkon $no
*/

void insertion_sort_list(listint_t **list)
{
listint_t *curr;
listint_t *temp;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
curr = (*list)->next;
while (curr != NULL)
{
temp = curr;
curr = curr->next;
while (temp->prev != NULL && temp->n < temp->prev->n)
{
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	temp->prev->next = temp->next;

	temp->next = temp->prev;
	temp->prev = temp->prev->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp;
	else
		*list = temp;

	temp->next->prev = temp;

	if (temp->prev == NULL)
		*list = temp;

	print_list(*list);
}
	}
}
