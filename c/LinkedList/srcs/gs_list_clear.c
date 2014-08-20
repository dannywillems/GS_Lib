#include "gs_list.h"
#include "gs_prototypes.h"

void		gs_list_clear(t_list **begin_list)
{
	t_list *tmp;

	tmp = *begin_list;
	while (tmp)
	{
		tmp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = tmp;
	}
	begin_list = NULL;
}
