#include "gs_stack.h"
#include "gs_prototypes.h"

t_stack		*gs_stack_create()
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (stack)
	{
		stack->head = NULL;
		stack->tail = NULL;
		stack->size = 0;
	}
	return (stack);
}
