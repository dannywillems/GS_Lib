#include "gs_btnode.h"
#include "gs_btree.h"
#include "gs_prototypes.h"

static void		_gs_btree_apply_infix(t_btnode *node, void (*f)(void *))
{
	if (node)
	{
		_gs_btree_apply_infix(node->left_child, f);
		f(node->data);
		_gs_btree_apply_infix(node->right_child, f);
	}
}

void			gs_btree_apply_infix(t_btree *tree, void (*f)(void *))
{
	if (tree)
		_gs_btree_apply_infix(tree->root, f);
}
