#include "gs_slist.h"
#include "gs_prototypes.h"

static void	_gs_snode_del(t_snode **node)
{
	t_snode *tmp;

	while (node && *node)
	{
		tmp = (*node)->next;
		gs_snode_del(node);
		*node = tmp;
	}
}

void		gs_slist_clear(t_slist **list)
{
	if (!gs_slist_isempty(*list))
	{
		_gs_snode_del(&((*list)->head));
		free(*list);
	}
	*list = NULL;
}
