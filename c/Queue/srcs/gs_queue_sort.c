#include "gs_queue.h"
#include "gs_prototypes.h"

void	_gs_dnode_sort(t_dnode *node, int (*cmp)(void *, void *))
{
	void	*tmp;
	int		swap;

	swap = 1;
	while (swap)
	{
		swap = 0;
		while (node->next)
		{
			if ((*cmp)(node->data, node->next->data) > 0)
			{
				tmp = node->data;
				node->data = node->next->data;
				node->next->data = tmp;
				swap = 1;
			}
			node = node->next;
		}
	}
	
}

void	gs_queue_sort(t_queue *queue, int (*cmp)(void *, void *))
{
	if (queue && queue->size > 1)
		_gs_dnode_sort(queue->head, cmp);
}
