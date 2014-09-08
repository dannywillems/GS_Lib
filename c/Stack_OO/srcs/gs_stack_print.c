#include "gs_stack.h"
#include <unistd.h>

void	gs_stack_print(t_stack *stack, void (*print_data)(void *))
{
	t_snode *n;

	if (stack)
	{
		n = stack->head;
		while (n)
		{
			print_data(n->data);
			write(1, " -> ", 4);
			n = n->next;
		}
		write(1, "*", 1);
	}
}
