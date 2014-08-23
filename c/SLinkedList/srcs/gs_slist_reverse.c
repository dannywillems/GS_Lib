#include "gs_slist.h"
#include "gs_prototypes.h"

void	gs_slist_reverse(t_slist *begin_list)
{
	t_slist *previous;
	t_slist *tmp;

	previous = NULL;
	while (begin_list)
	{
		tmp = begin_list->next;
		begin_list->next = previous;
		previous = begin_list;
		begin_list = tmp;
	}
}
