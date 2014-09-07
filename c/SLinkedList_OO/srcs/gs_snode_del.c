#include "gs_slist.h"
#include "gs_prototypes.h"

void	gs_snode_del(t_snode **n)
{
	if (n && *n)
		free(*n);
	*n = NULL;
}
