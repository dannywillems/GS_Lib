#include "gs_slist.h"
#include "gs_prototypes.h"

int		gs_slist_size(t_slist *begin_list)
{
	if (begin_list)
		return (gs_slist_size(begin_list->next) + 1);
	else
		return (0);
}
