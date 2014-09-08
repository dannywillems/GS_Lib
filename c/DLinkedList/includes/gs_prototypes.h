#ifndef GS_PROTOTYPES_H
# define GS_PROTOTYPES_H

# include "gs_dlist.h"
# include "gs_typedef.h"

# include <stdlib.h>

t_dnode	*gs_dnode_create(void *data);
void	gs_dnode_del(t_dnode **node);

t_dlist	*gs_dlist_create();
void	gs_dlist_clear(t_dlist **list);
void	*gs_dlist_del_at(t_dlist *list, pos_t i);

size_t	gs_dlist_size(t_dlist *list);
t_dnode	*gs_dlist_first(t_dlist *list);
t_dnode	*gs_dlist_last(t_dlist *list);
bool_t	gs_dlist_isempty(t_dlist *list);

void	gs_dlist_push_front(t_dlist *list, void *data);
void	gs_dlist_push_back(t_dlist *list, void *data);
void	gs_dlist_merge(t_dlist **list1, t_dlist *list2);

t_dlist	*gs_dlist_reverse(t_dlist *list);
void	gs_dlist_sort(t_dlist *list, int (*cmp)(void *, void *));

t_dnode	*gs_dlist_at(t_dlist *list, pos_t i);
t_dnode	*gs_dlist_find(const t_dlist *list, void *data_ref, int (*cmp)());
t_dnode *gs_dlist_find_max(const t_dlist *list, int (*cmp)(void *, void *));
t_dnode *gs_dlist_find_min(const t_dlist *list, int (*cmp)(void *, void *));

char	**gs_dlist_toarray(t_dlist *list, bool_t delete_list);

void	gs_dlist_print(t_dlist *list, void (*print_data)(void *));
#endif
