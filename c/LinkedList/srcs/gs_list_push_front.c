#include "gs_list.h"

void		gs_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (*begin_list)
	{
		tmp = gs_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else
		*begin_list = gs_create_elem(data);
}
