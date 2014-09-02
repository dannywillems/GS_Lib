#include "gs_slist.h"
#include "gs_prototypes.h"

t_slist		*gs_slist_at(t_slist *begin_list, pos_t i)
{
	if (i == 0)
		return (begin_list);
	else if (begin_list)
		return (gs_slist_at(begin_list->next, i - 1));
	else
		return (NULL);
}

