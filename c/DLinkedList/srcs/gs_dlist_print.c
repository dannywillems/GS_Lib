#include "gs_dlist.h"
#include <unistd.h>

void	gs_dlist_print(t_dlist *list, void (*print_data)(void *))
{
	t_dnode *n;

	if (list)
	{
		n = list->head;
		while (n)
		{
			print_data(n->data);
			write(1, " -> ", 4);
			n = n->next;
		}
		write(1, "*", 1);
	}
}
