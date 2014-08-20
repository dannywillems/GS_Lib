#include "gs_btree.h"
#include "gs_prototypes.h"

int		gs_btree_nb_node(t_btree *root)
{
	if (root)
	{
		return (1 + gs_btree_nb_node(root->left_child) + 
				gs_btree_nb_node(root->right_child));
	}
	else
		return (0);
}
