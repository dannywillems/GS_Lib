#ifndef GS_SLIST_H
# define GS_SLIST_H

# include "gs_snode.h"
# include <stdlib.h>

typedef struct		s_slist
{
	struct s_snode	*head;
	struct s_snode	*tail;
	size_t			size;
}					t_slist;

#endif
