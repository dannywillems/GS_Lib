#ifndef GS_BTREE_H
# define GS_BTREE_H

# include "gs_btnode.h"

# include <stdlib.h>

typedef struct	s_btree
{
	t_btnode	*root;
	size_t		height;
	size_t		size;
}				t_btree;

#endif
