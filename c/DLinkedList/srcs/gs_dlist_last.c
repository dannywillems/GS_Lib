#include "gs_dlist.h"
#include "gs_prototypes.h"

t_dnode		*gs_dlist_last(t_dlist *list)
{
	if (list)
		return (list->tail);
	else
		return (NULL);
}
