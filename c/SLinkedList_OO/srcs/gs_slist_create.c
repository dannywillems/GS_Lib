#include "gs_slist.h"
#include "gs_prototypes.h"

t_slist		*gs_slist_create()
{
	t_slist	*list;

	list = (t_slist *)malloc(sizeof(t_slist));
	if (list)
	{
		list->head = NULL;
		list->tail = NULL;
		list->size = 0;
	}
	return (list);
}
