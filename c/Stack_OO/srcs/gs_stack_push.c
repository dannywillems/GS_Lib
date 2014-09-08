#include "gs_stack.h"
#include "gs_prototypes.h"

void	gs_stack_push(t_stack *stack, void *data)
{
	gs_stack_push_front(stack, data);
}
