#include "gs_btree.h"
#include "gs_prototypes.h"

void gs_btree_apply_prefix(t_btree *root, void (*f)(void *))
{
	if (root)
	{
		f(root->data);
		gs_btree_apply_prefix(root->left_child, f);
		gs_btree_apply_prefix(root->right_child, f);
	}
}
