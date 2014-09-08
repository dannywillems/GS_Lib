#include "gs_dlist.h"
#include "gs_prototypes.h"

void		gs_dlist_push_front(t_dlist *list, void *data)
{
	t_dnode *tmp;

	if (list && (tmp = gs_dnode_create(data)))
	{
		if (gs_dlist_isempty(list))
		{
			list->head = tmp;
			list->tail = tmp;
		}
		else
		{
			list->head->previous = tmp;
			tmp->next = list->head;
			list->head = tmp;
		}
		list->size += 1;
	}
}
