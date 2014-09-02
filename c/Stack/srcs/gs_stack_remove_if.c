#include "gs_stack.h"
#include "gs_prototypes.h"

void	gs_stack_remove_if(t_stack **begin_stack, void *data_ref, int (*cmp)())
{
	t_stack *t;

	if (*begin_stack)
	{
		if ((*cmp)((*begin_stack)->data, data_ref) == 0)
		{
			t = (*begin_stack);
			(*begin_stack) = (*begin_stack)->next;
			free(t);
			gs_stack_remove_if(begin_stack, data_ref, cmp); 
		}
		else
			gs_stack_remove_if(&((*begin_stack)->next), data_ref, cmp);
	}
}
