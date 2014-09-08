#include "gs_btnode.h"
#include "gs_btree.h"
#include "gs_prototypes.h"

int		max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

static size_t	_gs_btree_update_height(t_btnode *node)
{
	if (node)
		return (1 + max(_gs_btree_update_height(node->left_child),
						_gs_btree_update_height(node->right_child)));
	else
		return (0);
}

size_t			gs_btree_update_height(t_btree *tree)
{
	if (tree)
		return ((tree->height = _gs_btree_update_height(tree->root)));
	else
		return (0);
}
