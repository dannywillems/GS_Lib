#include "gs_btree.h"
#include "gs_prototypes.h"

size_t		gs_btree_size(t_btree *root)
{
	if (root)
	{
		return (1 + gs_btree_size(root->left_child) + 
				gs_btree_size(root->right_child));
	}
	else
		return (0);
}
