#include "gs_slist.h"

t_slist *gs_slist_find_min(t_slist *list, int (*cmp)(void *, void *))
{
	t_slist *min;
	t_slist *tmp;

	tmp = list;
	min = list;
	while (tmp)
	{
		if (cmp(tmp->data, min->data) > 0)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

