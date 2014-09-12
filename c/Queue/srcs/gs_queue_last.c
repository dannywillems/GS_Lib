#include "gs_queue.h"
#include "gs_prototypes.h"

t_dnode		*gs_queue_last(t_queue *queue)
{
	if (queue)
		return (queue->tail);
	else
		return (NULL);
}
