#include "gs_slist.h"

static t_snode	*gs_snode_find_min(t_snode *node, int (*cmp)(void *, void*))
{
	t_snode *min;

	min = node;
	while (node)
	{
		if (cmp(node->data, min->data) > 0)
			min = node;
		node = node->next;
	}
	return (min);
}

t_snode *gs_slist_find_min(const t_slist *list, int (*cmp)(void *, void *))
{
	if (list->size > 0)
		return (gs_snode_find_min(list->head, cmp));
	else
		return (NULL);
}
