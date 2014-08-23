#include "gs_slist.h"
#include "gs_prototypes.h"

void	gs_slist_merge(t_slist **begin_list, t_slist *begin_list2)
{
	if (*begin_list)
		gs_slist_merge(&((*begin_list)->next), begin_list2);
	else
		*begin_list = begin_list2;
}
