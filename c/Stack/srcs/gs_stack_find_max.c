#include "gs_stack.h"

t_stack *gs_stack_find_max(t_stack *stack, int (*cmp)(void *, void *))
{
	t_stack *max;
	t_stack *tmp;

	tmp = stack;
	max = stack;
	while (tmp)
	{
		if (cmp(tmp->data, max->data) > 0)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

