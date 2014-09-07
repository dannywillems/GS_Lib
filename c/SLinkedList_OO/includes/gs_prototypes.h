#ifndef GS_PROTOTYPES_H
# define GS_PROTOTYPES_H

# include "gs_slist.h"
# include "gs_typedef.h"

# include <stdlib.h>

t_snode	*gs_snode_create(void *data);
void	gs_snode_del(t_snode **node);

t_slist	*gs_slist_create();
void	gs_slist_clear(t_slist **begin_list);

size_t	gs_slist_size(t_slist *begin_list);
t_snode	*gs_slist_first(t_slist *list);
t_snode	*gs_slist_last(t_slist *list);
bool_t	gs_slist_isempty(t_slist *list);

void	gs_slist_push_front(t_slist *list, void *data);
void	gs_slist_push_back(t_slist *list, void *data);
void	gs_slist_merge(t_slist **list1, t_slist *list2);

t_slist	*gs_slist_reverse(t_slist *begin_list);
void	gs_slist_sort(t_slist *list, int (*cmp)(void *, void *));

t_snode	*gs_slist_at(t_slist *begin_list, pos_t i);
t_snode	*gs_slist_find(const t_slist *list, void *data_ref, int (*cmp)());
t_snode *gs_slist_find_max(const t_slist *list, int (*cmp)(void *, void *));
t_snode *gs_slist_find_min(const t_slist *list, int (*cmp)(void *, void *));

char	**gs_slist_toarray(t_slist *begin_list, bool_t delete_list);

void	gs_slist_print(t_slist *list, void (*print_data)(void *));
#endif
