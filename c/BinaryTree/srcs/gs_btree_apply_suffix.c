#include "gs_btree.h"
#include "gs_prototypes.h"

void	gs_btree_apply_suffix(t_btree *root, void (*f)(void *))
{
	if (root)
	{
		gs_btree_apply_suffix(root->left_child, f);
		gs_btree_apply_suffix(root->right_child, f);
		f(root->data);
	}
}
