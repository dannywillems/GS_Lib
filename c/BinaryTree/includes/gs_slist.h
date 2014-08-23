#ifndef GS_SLIST_H
# define GS_SLIST_H

# include "gs_btree.h"

typedef struct		s_slist
{
	t_btree			*node;
	struct s_slist	*next;
}					t_slist;

#endif
