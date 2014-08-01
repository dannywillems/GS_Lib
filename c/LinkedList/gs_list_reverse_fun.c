#include "gs_list.h"

void	gs_list_reverse_fun(t_list *begin_list)
{
	t_list *n;
	t_list *tmp;

	n = NULL;
	while (begin_list)
	{
		tmp = begin_list->next;
		begin_list->next = n;
		n = begin_list;
		begin_list = tmp;
	}
}
