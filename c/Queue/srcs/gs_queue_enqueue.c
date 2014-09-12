#include "gs_prototypes.h"
#include "gs_queue.h"

void	gs_queue_enqueue(t_queue *queue, void *data)
{
	gs_queue_push_back(queue, data);
}
