#include "gs_queue.h"
#include <unistd.h>

void	gs_queue_print(t_queue *queue, void (*print_data)(void *))
{
	t_dnode *n;

	if (queue)
	{
		n = queue->head;
		while (n)
		{
			print_data(n->data);
			write(1, " -> ", 4);
			n = n->next;
		}
		write(1, "*", 1);
	}
}
