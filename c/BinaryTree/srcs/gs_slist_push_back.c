#include "gs_btree.h"
#include "gs_prototypes.h"

void		gs_slist_push_back(t_slist **begin_list, t_btree *node)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			gs_slist_push_back(&((*begin_list)->next), node);
		else
			(*begin_list)->next = gs_slist_create(node);
	}
	else
		*begin_list = gs_slist_create(node);
}
