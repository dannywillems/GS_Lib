#include "gs_slist.h"
#include "gs_prototypes.h"

void	gs_slist_remove_if(t_slist **begin_list, void *data_ref, int (*cmp)())
{
	t_slist *t;

	if (*begin_list)
	{
		if ((*cmp)((*begin_list)->data, data_ref) == 0)
		{
			t = (*begin_list);
			(*begin_list) = (*begin_list)->next;
			free(t);
			gs_slist_remove_if(begin_list, data_ref, cmp); 
		}
		else
			gs_slist_remove_if(&((*begin_list)->next), data_ref, cmp);
	}
}
