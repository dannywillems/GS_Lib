#include "gs_slist.h"
#include "gs_prototypes.h"

t_slist		*gs_slist_last(t_slist *begin_list)
{
	if (begin_list)
	{
		while (begin_list->next)
			begin_list = begin_list->next;
	}
	return (begin_list);
}
