#include "gs_stack.h"
#include "gs_prototypes.h"

void		gs_stack_push_back(t_stack *stack, void *data)
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
			stack->tail->next = tmp;
			stack->tail = tmp;
		}
		stack->size += 1;
	}
}
