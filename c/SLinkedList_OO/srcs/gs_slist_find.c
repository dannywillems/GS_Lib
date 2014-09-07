#include "gs_slist.h"
#include "gs_prototypes.h"

static t_snode	*gs_snode_find(t_snode *node, void *data_ref, int (*cmp)())
{
	if (node)
	{
		if ((*cmp)(node->data, data_ref) == 0)
			return (node);
		else
			return (gs_snode_find(node->next, data_ref, cmp));
	}
	else
		return (NULL);
}

t_snode	*gs_slist_find(const t_slist *list, void *data_ref, int (*cmp)())
{
	if (list->size > 0)
		return (gs_snode_find(list->head, data_ref, cmp));
	else
		return (NULL);
}
