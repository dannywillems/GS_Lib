#include "gs_queue.h"
#include "gs_prototypes.h"

t_queue		*gs_queue_create()
{
	t_queue	*queue;

	queue = (t_queue *)malloc(sizeof(t_queue));
	if (queue)
	{
		queue->head = NULL;
		queue->tail = NULL;
		queue->size = 0;
	}
	return (queue);
}
