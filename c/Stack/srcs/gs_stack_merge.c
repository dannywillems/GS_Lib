#include "gs_stack.h"
#include "gs_prototypes.h"

void	gs_stack_merge(t_stack **begin_stack, t_stack *begin_stack2)
{
	if (*begin_stack)
		gs_stack_merge(&((*begin_stack)->next), begin_stack2);
	else
		*begin_stack = begin_stack2;
}
