#include "gs_slist.h"
#include "gs_prototypes.h"

void	*gs_slist_del_at(t_slist **begin_list, pos_t i)
{
	if (*begin_list)
	{
		if (i == 0)
			return (gs_slist_del(begin_list));
		else
			return (gs_slist_del_at(begin_list, i - 1));
	}
	else
		return (NULL);
}
