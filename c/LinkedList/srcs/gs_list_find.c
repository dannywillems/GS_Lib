#include "gs_list.h"
#include "gs_prototypes.h"

t_list	*gs_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			return (begin_list);
		else
			return (gs_list_find(begin_list->next, data_ref, cmp));
	}
	else
		return (NULL);
}
