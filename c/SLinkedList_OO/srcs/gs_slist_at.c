#include "gs_slist.h"
#include "gs_prototypes.h"


static t_snode	*_gs_snode_at(t_snode *node, pos_t i)
{
	if (i == 0)
		return (node);
	else
		return (_gs_snode_at(node->next, i - 1));
}

t_snode		*gs_slist_at(t_slist *list, pos_t i)
{
	if (i < list->size)
		return (_gs_snode_at(list->head, i));
	else
		return (NULL);
}

