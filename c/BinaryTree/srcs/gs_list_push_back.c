#include "gs_btree.h"
#include "gs_prototypes.h"

void		gs_list_push_back(t_list **begin_list, t_btree *node)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			gs_list_push_back(&((*begin_list)->next), node);
		else
			(*begin_list)->next = gs_create_list(node);
	}
	else
		*begin_list = gs_create_list(node);
}
