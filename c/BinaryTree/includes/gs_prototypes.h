#ifndef GS_PROTOTYPES_H
# define GS_PROTOTYPES_H

# include "gs_btree.h"
# include "gs_list.h"
# include "gs_type.h"

# include <stdlib.h>

t_btree		*gs_create_btree(void *data);
int			gs_btree_height(t_btree *root);
t_bool		gs_btree_is_full(t_btree *root);
int			gs_btree_size(t_btree *root);
void		gs_btree_applyf_prefix(t_btree *root, void (*f)(void *));
void		gs_btree_applyf_infix(t_btree *root, void (*f)(void *));
void		gs_btree_applyf_suffix(t_btree *root, void (*f)(void *));
int			gs_btree_nsearch_prefix(	t_btree *root, t_list **t, int n,
										void *data, int (*cmp)(void *, void *));
int			gs_btree_nsearch_infix(		t_btree *root, t_list **t, int n,
										void *data, int (*cmp)(void *, void *));
int			gs_btree_nsearch_sufffix(	t_btree *root, t_list **t, int n,
										void *data, int (*cmp)(void *, void *));

t_list		*gs_create_list(t_btree *node);
void		gs_list_push_back(t_list **begin_list, t_btree *node);

#endif
