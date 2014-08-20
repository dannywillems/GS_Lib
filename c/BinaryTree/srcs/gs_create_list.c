#include "gs_btree.h"
#include "gs_prototypes.h"

t_list		*gs_create_list(t_btree *node)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list)
	{
		list->node = node;
		list->next = NULL;
	}
	return (list);
}
