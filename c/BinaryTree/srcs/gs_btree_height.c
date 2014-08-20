#include "gs_btree.h"
#include "gs_prototypes.h"

int		max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

int		gs_btree_height(t_btree *root)
{
	if (root)
		return (1 + max(gs_btree_height(root->left_child),
						gs_btree_height(root->right_child)));
	else
		return (0);
}
