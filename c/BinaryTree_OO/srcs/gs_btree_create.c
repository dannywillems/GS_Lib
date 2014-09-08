#include "gs_btnode.h"
#include "gs_btree.h"
#include "gs_prototypes.h"

t_btree *gs_btree_create()
{
	t_btree *bt;

	bt = (t_btree *)(malloc(sizeof(t_btree)));
	if (bt)
	{
		bt->root = NULL;
		bt->height = 0;
		bt->size = 0;
	}
	return (bt);
}
