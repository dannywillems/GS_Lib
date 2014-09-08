#include "gs_stack.h"
#include "gs_prototypes.h"


static t_snode	*_gs_snode_at(t_snode *node, pos_t i)
{
	if (i == 0)
		return (node);
	else
		return (_gs_snode_at(node->next, i - 1));
}

t_snode		*gs_stack_at(t_stack *begin_stack, pos_t i)
{
	if (i < begin_stack->size)
		return (_gs_snode_at(begin_stack->head, i));
	else
		return (NULL);
}

