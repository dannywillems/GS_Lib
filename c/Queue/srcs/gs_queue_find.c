#include "gs_queue.h"
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

t_dnode	*gs_queue_find(const t_queue *queue, void *data_ref, int (*cmp)())
{
	if (queue->size > 0)
		return (gs_dnode_find(queue->head, data_ref, cmp));
	else
		return (NULL);
}
