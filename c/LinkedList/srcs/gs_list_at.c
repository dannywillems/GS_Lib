#include "gs_list.h"
#include "gs_prototypes.h"

t_list		*gs_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr == 1)
		return (begin_list);
	else if (begin_list)
		return (gs_list_at(begin_list->next, nbr - 1));
	else
		return (NULL);
}

