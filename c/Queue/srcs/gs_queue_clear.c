#include "gs_queue.h"
#include "gs_prototypes.h"

static void	_gs_dnode_del(t_dnode **node)
{
	t_dnode *tmp;

	while (node && *node)
	{
		tmp = (*node)->next;
		gs_dnode_del(node);
		*node = tmp;
	}
}

void		gs_queue_clear(t_queue **queue)
{
	if (!gs_queue_isempty(*queue))
	{
		_gs_dnode_del(&((*queue)->head));
		free(*queue);
	}
	*queue = NULL;
}
