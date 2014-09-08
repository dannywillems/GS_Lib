#include "gs_dlist.h"
#include "gs_prototypes.h"

t_dlist		*gs_dlist_create()
{
	t_dlist	*list;

	list = (t_dlist *)malloc(sizeof(t_dlist));
	if (list)
	{
		list->head = NULL;
		list->tail = NULL;
		list->size = 0;
	}
	return (list);
}
