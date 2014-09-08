#include "gs_dlist.h"
#include "gs_prototypes.h"


static t_dnode	*_gs_dnode_at(t_dnode *node, pos_t i)
{
	if (i == 0)
		return (node);
	else
		return (_gs_dnode_at(node->next, i - 1));
}

t_dnode		*gs_dlist_at(t_dlist *list, pos_t i)
{
	if (i < list->size)
		return (_gs_dnode_at(list->head, i));
	else
		return (NULL);
}

