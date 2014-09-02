#include "gs_stack.h"
#include "gs_prototypes.h"

t_stack		*gs_stack_at(t_stack *begin_stack, unsigned int nbr)
{
	if (nbr == 1)
		return (begin_stack);
	else if (begin_stack)
		return (gs_stack_at(begin_stack->next, nbr - 1));
	else
		return (NULL);
}

