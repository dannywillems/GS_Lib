#include "gs_stack.h"
#include "gs_prototypes.h"

void		gs_stack_push_front(t_stack **begin_stack, void *data)
{
	t_stack *tmp;

	if (*begin_stack)
	{
		tmp = gs_stack_create(data);
		tmp->next = *begin_stack;
		*begin_stack = tmp;
	}
	else
		*begin_stack = gs_stack_create(data);
}
