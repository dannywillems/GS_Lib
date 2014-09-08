#include "gs_btnode.h"
#include "gs_btree.h"
#include "gs_prototypes.h"

static size_t		_gs_btree_update_size(t_btnode *node)
{
	if (node)
	{
		return (1 + _gs_btree_update_size(node->left_child) + 
				_gs_btree_update_size(node->right_child));
	}
	else
		return (0);
}

size_t				gs_btree_update_size(t_btree *tree)
{
	if (tree)
		return ((tree->size = _gs_btree_update_size(tree->root)));
	else
		return (0);
}
