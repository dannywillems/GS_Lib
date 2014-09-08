#include "gs_btnode.h"
#include "gs_btree.h"
#include "gs_prototypes.h"

void _gs_btree_apply_prefix(t_btnode *node, void (*f)(void *))
{
	if (node)
	{
		f(node->data);
		_gs_btree_apply_prefix(node->left_child, f);
		_gs_btree_apply_prefix(node->right_child, f);
	}
}

void gs_btree_apply_prefix(t_btree *tree, void (*f)(void *))
{
	if (tree)
		_gs_btree_apply_prefix(tree->root, f);
}
