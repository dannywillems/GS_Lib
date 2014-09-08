#include "gs_stack.h"
#include "gs_prototypes.h"

static void	_gs_snode_del(t_snode **node)
{
	t_snode *tmp;

	while (node && *node)
	{
		tmp = (*node)->next;
		gs_snode_del(node);
		*node = tmp;
	}
}

void		gs_stack_clear(t_stack **stack)
{
	if (!gs_stack_isempty(*stack))
	{
		_gs_snode_del(&((*stack)->head));
		free(*stack);
	}
	*stack = NULL;
}
