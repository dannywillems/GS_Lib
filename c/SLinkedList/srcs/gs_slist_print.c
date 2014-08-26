#include "gs_slist.h"
#include <unistd.h>

void	gs_slist_print(t_slist *begin)
{
	if (begin)
	{
		write(1, begin->data, sizeof(begin->data));
		gs_slist_print(begin->next);
	}
}
