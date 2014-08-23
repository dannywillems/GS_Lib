#include "gs_slist.h"
#include "gs_prototypes.h"

void		gs_slist_push_back(t_slist **begin_list, void *data)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			gs_slist_push_back(&((*begin_list)->next), data);
		else
			(*begin_list)->next = gs_slist_create(data);
	}
	else
		*begin_list = gs_slist_create(data);
}
