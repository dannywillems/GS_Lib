#include "gs_list.h"

void		gs_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			gs_list_push_back(&((*begin_list)->next), data);
		else
			(*begin_list)->next = gs_create_elem(data);
	}
	else
		*begin_list = gs_create_elem(data);
}
