#include "gs_dlist.h"

static t_dnode	*gs_dnode_find_max(t_dnode *node, int (*cmp)(void *, void*))
{
	t_dnode *max;

	max = node;
	while (node)
	{
		if (cmp(node->data, max->data) > 0)
			max = node;
		node = node->next;
	}
	return (max);
}

t_dnode *gs_dlist_find_max(const t_dlist *list, int (*cmp)(void *, void *))
{
	if (list->size > 0)
		return (gs_dnode_find_max(list->head, cmp));
	else
		return (NULL);
}
