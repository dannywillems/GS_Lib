#include "gs_slist.h"
#include "gs_prototypes.h"

t_slist	*gs_slist_find(t_slist *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			return (begin_list);
		else
			return (gs_slist_find(begin_list->next, data_ref, cmp));
	}
	else
		return (NULL);
}
