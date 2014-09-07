#include "gs_slist.h"
#include "gs_prototypes.h"

static void	_gs_slist_reverse(t_snode *node)
{
	t_snode *previous;
	t_snode *tmp;

	previous = NULL;
	while (node)
	{
		tmp = node->next;
		node->next = previous;
		previous = node;
		node = tmp;
	}
}	

t_slist		*gs_slist_reverse(t_slist *list)
{
	t_snode *tmp;

	if (list && list->size > 1)
	{
		_gs_slist_reverse(list->head);
		tmp = list->head;
		list->head = list->tail;
		list->tail = tmp;
	}
	return (list);
}
