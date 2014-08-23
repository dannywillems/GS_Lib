#include "gs_btree.h"
#include "gs_prototypes.h"

t_btree *gs_btree_create(void *data)
{
	t_btree *bt;

	bt = (t_btree *)(malloc(sizeof(t_btree)));
	bt->parent = NULL;
	bt->data = data;
	return (bt);
}
