#include "gs_stack.h"
#include "gs_prototypes.h"

t_stack		*gs_stack_last(t_stack *begin_stack)
{
	if (begin_stack)
	{
		while (begin_stack->next)
			begin_stack = begin_stack->next;
	}
	return (begin_stack);
}
