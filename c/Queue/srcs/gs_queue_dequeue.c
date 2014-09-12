#include "gs_prototypes.h"
#include "gs_queue.h"

void	*gs_queue_dequeue(t_queue *queue)
{
	t_dnode *tmp;
	void	*tmp_data;

	if (queue && !gs_queue_isempty(queue))
	{
		tmp_data = queue->tail->data;
		tmp = queue->tail->previous;
		gs_dnode_del(&(queue->tail));
		queue->tail = tmp;
		return (tmp_data);
	}
	else
		return (NULL);
}
