#include "gs_stack.h"
#include "gs_prototypes.h"

void	gs_stack_merge(t_stack **stack1, t_stack *stack2)
{
	if (stack1 && *stack1 && stack2)
	{	
		if (gs_stack_isempty(*stack1))
		{
			(*stack1)->head = stack2->head;
			(*stack1)->tail = stack2->tail;
		}
		else
		{
			(*stack1)->tail->next = stack2->head;
			(*stack1)->tail = stack2->head;
		}
		(*stack1)->size += stack2->size;
	}
}
