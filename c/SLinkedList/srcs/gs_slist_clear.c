#include "gs_slist.h"
#include "gs_prototypes.h"

void	gs_slist_clear(t_slist **begin_list)
{
	while (*begin_list)
		gs_slist_del(begin_list);
	begin_list = NULL;
}
