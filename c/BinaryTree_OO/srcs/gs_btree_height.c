#include "gs_btnode.h"
#include "gs_btree.h"
#include "gs_prototypes.h"

size_t	gs_btree_height(t_btree *tree)
{
	if (tree)
		return (tree->height);
	else
		return (0);
}
