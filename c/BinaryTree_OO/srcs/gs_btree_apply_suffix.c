#include "gs_btnode.h"
#include "gs_btree.h"
#include "gs_prototypes.h"

static void		_gs_btree_apply_suffix(t_btnode *node, void (*f)(void *))
{
	if (node)
	{
		_gs_btree_apply_suffix(node->left_child, f);
		_gs_btree_apply_suffix(node->right_child, f);
		f(node->data);
	}
}

void			gs_btree_apply_suffix(t_btree *tree, void (*f)(void *))
{
	if (tree)
		_gs_btree_apply_suffix(tree->root, f);
}
