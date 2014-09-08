#include "gs_stack.h"

static t_snode	*gs_snode_find_min(t_snode *node, int (*cmp)(void *, void*))
{
	t_snode *min;

	min = node;
	while (node)
	{
		if (cmp(node->data, min->data) > 0)
			min = node;
		node = node->next;
	}
	return (min);
}

t_snode *gs_stack_find_min(const t_stack *stack, int (*cmp)(void *, void *))
{
	if (stack->size > 0)
		return (gs_snode_find_min(stack->head, cmp));
	else
		return (NULL);
}
