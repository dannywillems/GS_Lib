#ifndef GS_SLIST_H
# define GS_SLIST_H

# include "gs_dnode.h"
# include <stdlib.h>

typedef struct		s_dlist
{
	struct s_dnode	*head;
	struct s_dnode	*tail;
	size_t			size;
}					t_dlist;

#endif
