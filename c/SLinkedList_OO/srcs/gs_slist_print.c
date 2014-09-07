#include "gs_slist.h"
#include <unistd.h>

void	gs_slist_print(t_slist *list, void (*print_data)(void *))
{
	t_snode *n;

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
