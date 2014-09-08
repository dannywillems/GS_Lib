#include "gs_stack.h"
#include "gs_prototypes.h"

t_snode		*gs_stack_first(t_stack *stack)
{
	if (stack && !gs_stack_isempty(stack))
		return (stack->head);
	else
		return (NULL);
}
