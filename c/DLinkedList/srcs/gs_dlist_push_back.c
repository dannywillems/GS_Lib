#include "gs_dlist.h"
#include "gs_prototypes.h"

void		gs_dlist_push_back(t_dlist *list, void *data)
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
			tmp->previous = list->tail;
			list->tail->next = tmp;
			list->tail = tmp;
		}
		list->size += 1;
	}
}
