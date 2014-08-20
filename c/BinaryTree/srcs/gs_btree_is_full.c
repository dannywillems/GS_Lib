#include "gs_btree.h"
#include "gs_type.h"
#include "gs_prototypes.h"

t_bool		gs_btree_is_full(t_btree *root)
{
	if (root)
	{
		if (root->left_child && root->right_child)
			return (gs_btree_is_full(root->left_child) &&
					gs_btree_is_full(root->right_child));
		else
			return (FALSE);
	}
	else
		return (TRUE);
}
