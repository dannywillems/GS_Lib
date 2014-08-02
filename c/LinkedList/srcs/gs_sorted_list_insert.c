#include "gs_list.h"

void	gs_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
		{
			if ((*cmp)((*begin_list)->data, begi
}
