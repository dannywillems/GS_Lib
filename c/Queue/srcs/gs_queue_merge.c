#include "gs_queue.h"
#include "gs_prototypes.h"

void	gs_queue_merge(t_queue **queue1, t_queue *queue2)
{
	if (queue1 && *queue1 && queue2)
	{	
		if (gs_queue_isempty(*queue1))
		{
			(*queue1)->head = queue2->head;
			(*queue1)->tail = queue2->tail;
		}
		else
		{
			(*queue1)->tail->next = queue2->head;
			(*queue1)->tail = queue2->head;
		}
		(*queue1)->size += queue2->size;
	}
}
