#include "gs_queue.h"
#include "gs_prototypes.h"

t_dnode	*gs_dnode_create(void *data)
{
	t_dnode *node;

	node = (t_dnode *)malloc(sizeof(t_dnode));
	if (node)
	{
		node->data = data;
		node->previous = NULL;
		node->next = NULL;
	}
	return (node);
}
