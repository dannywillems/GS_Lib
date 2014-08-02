#include "gs_list.h"

int		gs_list_size(t_list *begin_list)
{
	if (begin_list)
		return (gs_list_size(begin_list->next) + 1);
	else
		return (0);
}
