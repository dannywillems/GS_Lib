#include "gs_queue.h"
#include "gs_prototypes.h"

t_dnode		*gs_queue_first(t_queue *queue)
{
	if (queue && !gs_queue_isempty(queue))
		return (queue->head);
	else
		return (NULL);
}
