#include "gs_queue.h"
#include "gs_typedef.h"

bool_t	gs_queue_isempty(const t_queue *queue)
{
	return (queue->size == 0);
}

