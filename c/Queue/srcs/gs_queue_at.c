#include "gs_queue.h"
#include "gs_prototypes.h"


static t_dnode	*_gs_dnode_at(t_dnode *node, pos_t i)
{
	if (i == 0)
		return (node);
	else
		return (_gs_dnode_at(node->next, i - 1));
}

t_dnode		*gs_queue_at(t_queue *queue, pos_t i)
{
	if (i < queue->size)
		return (_gs_dnode_at(queue->head, i));
	else
		return (NULL);
}

