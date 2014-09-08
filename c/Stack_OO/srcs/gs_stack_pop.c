#include "gs_stack.h"
#include "gs_prototypes.h"

void	*gs_stack_pop(t_stack *stack)
{
	return (gs_stack_del_at(stack, 0));
}
