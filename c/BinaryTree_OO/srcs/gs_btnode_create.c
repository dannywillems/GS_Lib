#include "gs_btnode.h"
#include "gs_prototypes.h"

t_btnode	*gs_btnode_create(void *data)
{
	t_btnode *node;

	node = (t_btnode *)malloc(sizeof(t_btnode));
	if (node)
	{
		node->data = data;
		node->parent = NULL;
		node->left_child = NULL;
		node->right_child = NULL;
	}
	return (node);
}
