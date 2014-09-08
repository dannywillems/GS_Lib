#include "gs_stack.h"
#include "gs_prototypes.h"

void		gs_stack_push_front(t_stack *stack, void *data)
{
	t_snode *tmp;

	if (stack && (tmp = gs_snode_create(data)))
	{
		if (gs_stack_isempty(stack))
		{
			stack->head = tmp;
			stack->tail = tmp;
		}
		else
		{
			tmp->next = stack->head;
			stack->head = tmp;
		}
		stack->size += 1;
	}
}
