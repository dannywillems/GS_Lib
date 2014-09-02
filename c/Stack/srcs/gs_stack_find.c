#include "gs_stack.h"
#include "gs_prototypes.h"

t_stack	*gs_stack_find(t_stack *begin_stack, void *data_ref, int (*cmp)())
{
	if (begin_stack)
	{
		if ((*cmp)(begin_stack->data, data_ref) == 0)
			return (begin_stack);
		else
			return (gs_stack_find(begin_stack->next, data_ref, cmp));
	}
	else
		return (NULL);
}
