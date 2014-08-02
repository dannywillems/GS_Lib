#include "gs_list.h"

void	gs_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *t;

	if (*begin_list)
	{
		if ((*cmp)((*begin_list)->data, data_ref) == 0)
		{
			t = (*begin_list);
			(*begin_list) = (*begin_list)->next;
			free(t);
			gs_list_remove_if(begin_list, data_ref, cmp); 
		}
		else
			gs_list_remove_if(&((*begin_list)->next), data_ref, cmp);
	}
}
