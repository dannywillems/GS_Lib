#include "gs_stack.h"
#include "gs_prototypes.h"

void	gs_stack_reverse(t_stack *begin_stack)
{
	t_stack *previous;
	t_stack *tmp;

	previous = NULL;
	while (begin_stack)
	{
		tmp = begin_stack->next;
		begin_stack->next = previous;
		previous = begin_stack;
		begin_stack = tmp;
	}
}
