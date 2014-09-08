#include "gs_stack.h"
#include "gs_typedef.h"

bool_t	gs_stack_isempty(const t_stack *stack)
{
	return (stack->size == 0);
}

