#include "gs_stack.h"
#include <unistd.h>

void	gs_stack_print(t_stack *begin)
{
	if (begin)
	{
		write(1, begin->data, sizeof(begin->data));
		gs_stack_print(begin->next);
	}
}
