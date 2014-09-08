#include "gs_stack.h"

static t_snode	*gs_snode_find_max(t_snode *node, int (*cmp)(void *, void*))
{
	t_snode *max;

	max = node;
	while (node)
	{
		if (cmp(node->data, max->data) > 0)
			max = node;
		node = node->next;
	}
	return (max);
}

t_snode *gs_stack_find_max(const t_stack *stack, int (*cmp)(void *, void *))
{
	if (stack->size > 0)
		return (gs_snode_find_max(stack->head, cmp));
	else
		return (NULL);
}
