#include "gs_dlist.h"
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

void		gs_dlist_clear(t_dlist **list)
{
	if (!gs_dlist_isempty(*list))
	{
		_gs_dnode_del(&((*list)->head));
		free(*list);
	}
	*list = NULL;
}
