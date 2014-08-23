#include "gs_slist.h"

t_slist *gs_slist_find_max(t_slist *list, int (*cmp)(void *, void *))
{
	t_slist *max;
	t_slist *tmp;

	tmp = list;
	max = list;
	while (tmp)
	{
		if (cmp(tmp->data, max->data) > 0)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

