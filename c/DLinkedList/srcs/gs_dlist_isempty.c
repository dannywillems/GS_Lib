#include "gs_dlist.h"
#include "gs_typedef.h"

bool_t	gs_dlist_isempty(const t_dlist *list)
{
	return (list->size == 0);
}

