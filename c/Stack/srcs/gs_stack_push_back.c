#include "gs_stack.h"
#include "gs_prototypes.h"

void		gs_stack_push_back(t_stack **begin_stack, void *data)
{
	if (*begin_stack)
	{
		if ((*begin_stack)->next)
			gs_stack_push_back(&((*begin_stack)->next), data);
		else
			(*begin_stack)->next = gs_stack_create(data);
	}
	else
		*begin_stack = gs_stack_create(data);
}
