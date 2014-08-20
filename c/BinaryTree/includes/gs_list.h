#ifndef GS_LIST_H
# define GS_LIST_H

# include "gs_btree.h"

typedef struct		s_list
{
	t_btree			*node;
	struct s_list	*next;
}					t_list;

#endif
