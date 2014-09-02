#include "gs_stack.h"
#include "gs_prototypes.h"

int		gs_stack_size(t_stack *begin_stack)
{
	if (begin_stack)
		return (gs_stack_size(begin_stack->next) + 1);
	else
		return (0);
}
