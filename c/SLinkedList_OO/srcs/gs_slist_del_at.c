#include "gs_prototypes.h"
#include "gs_slist.h"

static	void	*_gs_slist_del_at(t_snode **node, pos_t i)
{
	t_snode *tmp_next;
	void	*tmp_data;

	if (i == 0)
	{
		tmp_data = (*node)->data;
		tmp_next = (*node)->next;
		gs_snode_del(node);
		*node = tmp_next;
		return (tmp_data);
	}
	else
		return (_gs_slist_del_at(&((*node)->next), i - 1));
}

void			*gs_slist_del_at(t_slist *slist, pos_t i)
{
	if (i < slist->size)
		return (_gs_slist_del_at(&(slist->head), i));
	else
		return (NULL);
}
