#include "gs_prototypes.h"
#include "gs_queue.h"

static	void	*_gs_queue_del_at(t_dnode **node, pos_t i)
{
	t_dnode *tmp_next;
	void	*tmp_data;

	if (i == 0)
	{
		tmp_data = (*node)->data;
		tmp_next = (*node)->next;
		gs_dnode_del(node);
		*node = tmp_next;
		return (tmp_data);
	}
	else
		return (_gs_queue_del_at(&((*node)->next), i - 1));
}

void			*gs_queue_del_at(t_queue *queue, pos_t i)
{
	if (i < queue->size)
		return (_gs_queue_del_at(&(queue->head), i));
	else
		return (NULL);
}
