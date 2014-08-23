#include "gs_slist.h"
#include "gs_prototypes.h"

void		gs_slist_clear(t_slist **begin_list)
{
	t_slist *tmp;

	tmp = *begin_list;
	while (tmp)
	{
		tmp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = tmp;
	}
	begin_list = NULL;
}
