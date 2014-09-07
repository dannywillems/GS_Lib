#include "gs_slist.h"
#include "gs_typedef.h"

bool_t	gs_slist_isempty(const t_slist *list)
{
	return (list->size == 0);
}

