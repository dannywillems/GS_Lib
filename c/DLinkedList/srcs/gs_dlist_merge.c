#include "gs_dlist.h"
#include "gs_prototypes.h"

void	gs_dlist_merge(t_dlist **list1, t_dlist *list2)
{
	if (list1 && *list1 && list2)
	{	
		if (gs_dlist_isempty(*list1))
		{
			(*list1)->head = list2->head;
			(*list1)->tail = list2->tail;
		}
		else
		{
			(*list1)->tail->next = list2->head;
			(*list1)->tail = list2->head;
		}
		(*list1)->size += list2->size;
	}
}
