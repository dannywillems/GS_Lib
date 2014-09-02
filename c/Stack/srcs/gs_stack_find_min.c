#include "gs_stack.h"

t_stack *gs_stack_find_min(t_stack *stack, int (*cmp)(void *, void *))
{
	t_stack *min;
	t_stack *tmp;

	tmp = stack;
	min = stack;
	while (tmp)
	{
		if (cmp(tmp->data, min->data) > 0)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

