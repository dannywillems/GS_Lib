#include "gs_stack.h"
#include "gs_prototypes.h"

void	gs_stack_pop(t_stack **begin_list)
{
	gs_stack_del(begin_list);
}
