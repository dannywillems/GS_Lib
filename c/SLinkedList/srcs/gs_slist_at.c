#include "gs_slist.h"
#include "gs_prototypes.h"

t_slist		*gs_slist_at(t_slist *begin_list, unsigned int nbr)
{
	if (nbr == 1)
		return (begin_list);
	else if (begin_list)
		return (gs_slist_at(begin_list->next, nbr - 1));
	else
		return (NULL);
}

