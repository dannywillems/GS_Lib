#include "gs_dlist.h"

static t_dnode	*gs_dnode_find_min(t_dnode *node, int (*cmp)(void *, void*))
{
	t_dnode *min;

	min = node;
	while (node)
	{
		if (cmp(node->data, min->data) > 0)
			min = node;
		node = node->next;
	}
	return (min);
}

t_dnode *gs_dlist_find_min(const t_dlist *list, int (*cmp)(void *, void *))
{
	if (list->size > 0)
		return (gs_dnode_find_min(list->head, cmp));
	else
		return (NULL);
}
