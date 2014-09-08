#include "gs_prototypes.h"
#include "gs_dlist.h"

static	void	*_gs_dlist_del_at(t_dnode **node, pos_t i)
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
		return (_gs_dlist_del_at(&((*node)->next), i - 1));
}

void			*gs_dlist_del_at(t_dlist *dlist, pos_t i)
{
	if (i < dlist->size)
		return (_gs_dlist_del_at(&(dlist->head), i));
	else
		return (NULL);
}
