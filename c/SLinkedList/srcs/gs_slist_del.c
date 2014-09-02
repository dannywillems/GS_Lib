#include "gs_slist.h"
#include "gs_prototypes.h"

void	gs_slist_del(t_slist **begin_list)
{
	t_slist *tmp;

	if (*begin_list)
	{
		tmp = (*begin_list)->next;
		free(*begin_list);
		(*begin_list) = tmp;
	}
}
