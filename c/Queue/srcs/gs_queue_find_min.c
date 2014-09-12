#include "gs_queue.h"

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

t_dnode *gs_queue_find_min(const t_queue *queue, int (*cmp)(void *, void *))
{
	if (queue->size > 0)
		return (gs_dnode_find_min(queue->head, cmp));
	else
		return (NULL);
}
