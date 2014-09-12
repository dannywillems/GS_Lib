#include "gs_queue.h"
#include "gs_prototypes.h"

void		gs_queue_push_back(t_queue *queue, void *data)
{
	t_dnode *tmp;

	if (queue && (tmp = gs_dnode_create(data)))
	{
		if (gs_queue_isempty(queue))
		{
			queue->head = tmp;
			queue->tail = tmp;
		}
		else
		{
			tmp->previous = queue->tail;
			queue->tail->next = tmp;
			queue->tail = tmp;
		}
		queue->size += 1;
	}
}
