#include "gs_slist.h"
#include "gs_prototypes.h"

void	gs_slist_sort(t_slist **list, int (*cmp)())
{
	t_slist	*ret;
	void	*tmp;
	int		swap;

	if (*list)
	{
		swap = 1;
		ret = *list;
		while (swap)
		{
			swap = 0;
			*list = ret;
			while ((*list)->next)
			{
				if ((*cmp)((*list)->data, (*list)->next->data) > 0)
				{
					tmp = (*list)->data;
					(*list)->data = (*list)->next->data;
					(*list)->next->data = tmp;
					swap = 1;
				}
				*list = (*list)->next;
			}
		}
		*list = ret;
	}
	
}
