#include "gs_stack.h"
#include "gs_prototypes.h"

static void	_gs_stack_reverse(t_snode *node)
{
	t_snode *previous;
	t_snode *tmp;

	previous = NULL;
	while (node)
	{
		tmp = node->next;
		node->next = previous;
		previous = node;
		node = tmp;
	}
}	

t_stack		*gs_stack_reverse(t_stack *stack)
{
	t_snode *tmp;

	if (stack && stack->size > 1)
	{
		_gs_stack_reverse(stack->head);
		tmp = stack->head;
		stack->head = stack->tail;
		stack->tail = tmp;
	}
	return (stack);
}
