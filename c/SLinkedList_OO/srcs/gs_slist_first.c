#include "gs_slist.h"
#include "gs_prototypes.h"

t_snode		*gs_slist_first(t_slist *list)
{
	if (list && !gs_slist_isempty(list))
		return (list->head);
	else
		return (NULL);
}
