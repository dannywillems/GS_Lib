#include "gs_list.h"
#include "gs_prototypes.h"

t_list		*gs_create_list(void *data)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
