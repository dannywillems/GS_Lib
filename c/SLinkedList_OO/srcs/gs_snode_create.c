#include "gs_slist.h"

t_snode	*gs_snode_create(void *data)
{
	t_snode *node;

	node = (t_snode *)malloc(sizeof(t_snode));
	if (node)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}
