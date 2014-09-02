#include "gs_stack.h"
#include "gs_prototypes.h"

t_stack		*gs_stack_create(void *data)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (stack)
	{
		stack->data = data;
		stack->next = NULL;
	}
	return (stack);
}
