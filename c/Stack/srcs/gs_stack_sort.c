#include "gs_stack.h"
#include "gs_prototypes.h"

void	gs_stack_sort(t_stack **stack, int (*cmp)())
{
	t_stack	*ret;
	void	*tmp;
	int		swap;

	if (*stack)
	{
		swap = 1;
		ret = *stack;
		while (swap)
		{
			swap = 0;
			*stack = ret;
			while ((*stack)->next)
			{
				if ((*cmp)((*stack)->data, (*stack)->next->data) > 0)
				{
					tmp = (*stack)->data;
					(*stack)->data = (*stack)->next->data;
					(*stack)->next->data = tmp;
					swap = 1;
				}
				*stack = (*stack)->next;
			}
		}
		*stack = ret;
	}
	
}
