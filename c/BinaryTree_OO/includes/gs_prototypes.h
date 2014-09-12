#ifndef GS_PROTOTYPES_H
# define GS_PROTOTYPES_H

# include "gs_btnode.h"
# include "gs_btree.h"
# include "gs_typedef.h"

t_btnode	*gs_btnode_create(void *data);
t_btree		*gs_btree_create();

t_bool		gs_btree_is_full(t_btree *tree);

size_t		gs_btree_update_height(t_btree *tree);
size_t		gs_btree_height(t_btree *tree);

size_t		gs_btree_update_size(t_btree *tree);
size_t		gs_btree_size(t_btree *tree);

void		gs_btree_applyf_prefix(t_btree *tree, void (*f)(void *));
void		gs_btree_applyf_infix(t_btree *tree, void (*f)(void *));
void		gs_btree_applyf_suffix(t_btree *tree, void (*f)(void *));

#endif
