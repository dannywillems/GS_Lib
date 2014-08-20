#include "gs_prototypes.h"
#include "gs_btree.h"

void	gs_btree_apply_infix(t_btree *root, void (*f)(void *))
{
	if (root)
	{
		gs_btree_apply_infix(root->left_child, f);
		f(root->data);
		gs_btree_apply_infix(root->right_child, f);
	}
}
