#include "gs_list.h"

void	gs_list_reverse(t_list *begin_list)
{
	t_list *previous;
	t_list *tmp;

	previous = NULL;
	while (begin_list)
	{
		tmp = begin_list->next;
		begin_list->next = previous;
		previous = begin_list;
		begin_list = tmp;
	}
}
