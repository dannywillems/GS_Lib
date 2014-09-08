#include "gs_dlist.h"
#include "gs_prototypes.h"

static void	_gs_dlist_reverse(t_dnode *node)
{
	t_dnode	*tmp;

	tmp = NULL;
	while (node)
	{
		tmp = node->next;
		node->next = node->previous;
		node->previous = tmp;
		node = tmp;
	}
}	

t_dlist		*gs_dlist_reverse(t_dlist *list)
{
	t_dnode *tmp;

	if (list && list->size > 1)
	{
		_gs_dlist_reverse(list->head);
		tmp = list->head;
		list->head = list->tail;
		list->tail = tmp;
	}
	return (list);
}
