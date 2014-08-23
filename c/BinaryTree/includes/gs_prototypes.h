#ifndef GS_PROTOTYPES_H
# define GS_PROTOTYPES_H

# include "gs_btree.h"
# include "gs_slist.h"
# include "gs_type.h"

# include <stdlib.h>

t_btree		*gs_btree_create(void *data);
int			gs_btree_height(t_btree *root);
t_bool		gs_btree_is_full(t_btree *root);
int			gs_btree_size(t_btree *root);
void		gs_btree_applyf_prefix(t_btree *root, void (*f)(void *));
void		gs_btree_applyf_infix(t_btree *root, void (*f)(void *));
void		gs_btree_applyf_suffix(t_btree *root, void (*f)(void *));
int			gs_btree_nsearch_prefix(	t_btree *root, t_slist **t, int n,
										void *data, int (*cmp)(void *, void *));
int			gs_btree_nsearch_infix(		t_btree *root, t_slist **t, int n,
										void *data, int (*cmp)(void *, void *));
int			gs_btree_nsearch_sufffix(	t_btree *root, t_slist **t, int n,
										void *data, int (*cmp)(void *, void *));

t_slist		*gs_slist_create(t_btree *node);
void		gs_slist_push_back(t_slist **begin_list, t_btree *node);

#endif
