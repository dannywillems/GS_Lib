#include "gs_stack.h"
#include "gs_prototypes.h"

t_snode		*gs_stack_last(t_stack *stack)
{
	if (stack)
		return (stack->tail);
	else
		return (NULL);
}
