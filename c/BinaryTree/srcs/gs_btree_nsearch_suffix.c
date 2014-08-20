#include "gs_btree.h"
#include "gs_prototypes.h"

int		gs_btree_nsearch_suffix(	t_btree *root, t_list **t, int n,
										void *data, int (*cmp)(void *, void *))
{
	if (root)
	{
		if (cmp(root->data, data) == 0 && n > 0)
		{
			gs_list_push_back(t, root);
			n -= 1;
		}
		n = gs_btree_nsearch_suffix(root->left_child, t, n, data, cmp);
		n = gs_btree_nsearch_suffix(root->right_child, t, n, data, cmp);	
	}
	return (n);
}
