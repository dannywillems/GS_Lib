#include "gs_dlist.h"
#include "gs_prototypes.h"

void	gs_dnode_del(t_dnode **n)
{
	if (n && *n)
		free(*n);
	*n = NULL;
}
