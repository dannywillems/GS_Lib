#include "gs_queue.h"
#include "gs_prototypes.h"

static void	_gs_queue_reverse(t_dnode *node)
{
	t_dnode	*tmp;

	tmp = NULL;
	while (node)
	{
		tmp = node->next;
		node->next = node->previous;
		node->previous = tmp;
		node = tmp;
	}
}	

t_queue		*gs_queue_reverse(t_queue *queue)
{
	t_dnode *tmp;

	if (queue && queue->size > 1)
	{
		_gs_queue_reverse(queue->head);
		tmp = queue->head;
		queue->head = queue->tail;
		queue->tail = tmp;
	}
	return (queue);
}
