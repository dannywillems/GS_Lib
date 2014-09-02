#include "gs_stack.h"
#include "gs_prototypes.h"

void	*gs_stack_del(t_stack **begin_list)
{
	t_stack *tmp;
	void	*data;

	if (*begin_list)
	{
		data = (*begin_list)->data;
		tmp = (*begin_list)->next;
		free(*begin_list);
		(*begin_list) = tmp;
		return (data);
	}
	return (NULL);
}
