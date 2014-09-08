#include "gs_dlist.h"
#include "gs_prototypes.h"

static t_dnode	*gs_dnode_find(t_dnode *node, void *data_ref, int (*cmp)())
{
	if (node)
	{
		if ((*cmp)(node->data, data_ref) == 0)
			return (node);
		else
			return (gs_dnode_find(node->next, data_ref, cmp));
	}
	else
		return (NULL);
}

t_dnode	*gs_dlist_find(const t_dlist *list, void *data_ref, int (*cmp)())
{
	if (list->size > 0)
		return (gs_dnode_find(list->head, data_ref, cmp));
	else
		return (NULL);
}
