#include "gs_btree.h"
#include "gs_prototypes.h"

t_slist		*gs_slist_create(t_btree *node)
{
	t_slist *list;

	list = (t_slist *)malloc(sizeof(t_slist));
	if (list)
	{
		list->node = node;
		list->next = NULL;
	}
	return (list);
}
