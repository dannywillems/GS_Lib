#include "gs_stack.h"
#include "gs_prototypes.h"

void		gs_stack_clear(t_stack **begin_stack)
{
	while (*begin_stack)
		gs_stack_del(begin_stack);
	begin_stack = NULL;
}
