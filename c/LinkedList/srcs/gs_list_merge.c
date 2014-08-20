#include "gs_list.h"
#include "gs_prototypes.h"

void	gs_list_merge(t_list **begin_list, t_list *begin_list2)
{
	if (*begin_list)
		gs_list_merge(&((*begin_list)->next), begin_list2);
	else
		*begin_list = begin_list2;
}
