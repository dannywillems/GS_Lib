#include "gs_list.h"
#include "gs_prototypes.h"

void		gs_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			gs_list_push_back(&((*begin_list)->next), data);
		else
			(*begin_list)->next = gs_create_list(data);
	}
	else
		*begin_list = gs_create_list(data);
}
