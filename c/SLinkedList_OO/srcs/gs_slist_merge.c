#include "gs_slist.h"
#include "gs_prototypes.h"

void	gs_slist_merge(t_slist **list1, t_slist *list2)
{
	if (list1 && *list1 && list2)
	{	
		if (gs_slist_isempty(*list1))
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
