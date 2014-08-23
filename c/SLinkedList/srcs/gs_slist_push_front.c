#include "gs_slist.h"
#include "gs_prototypes.h"

void		gs_slist_push_front(t_slist **begin_list, void *data)
{
	t_slist *tmp;

	if (*begin_list)
	{
		tmp = gs_slist_create(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else
		*begin_list = gs_slist_create(data);
}
