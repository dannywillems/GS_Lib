#include "gs_slist.h"
#include "gs_prototypes.h"

t_snode		*gs_slist_last(t_slist *list)
{
	if (list)
		return (list->tail);
	else
		return (NULL);
}
