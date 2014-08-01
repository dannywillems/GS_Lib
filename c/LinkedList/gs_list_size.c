#include "gs_list.h"

int		gs_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	if (begin_list)
	{
		while (begin_list)
		{
			begin_list = begin_list->next;
			i++;
		}
	}
	return (i);
}
