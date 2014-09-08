#include "gs_stack.h"
#include "gs_prototypes.h"

static t_snode	*gs_snode_find(t_snode *node, void *data_ref, int (*cmp)())
{
	if (node)
	{
		if ((*cmp)(node->data, data_ref) == 0)
			return (node);
		else
			return (gs_snode_find(node->next, data_ref, cmp));
	}
	else
		return (NULL);
}

t_snode	*gs_stack_find(const t_stack *stack, void *data_ref, int (*cmp)())
{
	if (stack->size > 0)
		return (gs_snode_find(stack->head, data_ref, cmp));
	else
		return (NULL);
}
