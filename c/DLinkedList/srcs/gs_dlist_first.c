#include "gs_dlist.h"
#include "gs_prototypes.h"

t_dnode		*gs_dlist_first(t_dlist *list)
{
	if (list && !gs_dlist_isempty(list))
		return (list->head);
	else
		return (NULL);
}
