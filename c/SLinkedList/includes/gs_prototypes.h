#ifndef GS_PROTOTYPES_H
# define GS_PROTOTYPES_H

# include "gs_slist.h"
# include "gs_typedef.h"

# include <stdlib.h>

t_slist	*gs_slist_create(void *data);
void	gs_slist_clear(t_slist **begin_list);
void	gs_slist_sort(t_slist **list, int (*cmp)());
t_slist	*gs_slist_find(t_slist *begin_list, void *data_ref, int (*cmp)());
int		gs_slist_size(t_slist *begin_list);
t_slist	*gs_slist_last(t_slist *begin_list);
void	gs_slist_merge(t_slist **begin_list, t_slist *begin_list2);
t_slist	*gs_slist_reverse(t_slist *begin_list);
void	gs_slist_remove_if(t_slist **begin_list, void *data_ref, int (*cmp)());
void	gs_slist_print(t_slist *begin_list);
void	gs_slist_push_front(t_slist **begin_list, void *data);
void	gs_slist_push_back(t_slist **begin_list, void *data);
t_slist	*gs_slist_at(t_slist *begin_list, pos_t i);
t_slist *gs_slist_find_max(t_slist *list, int (*cmp)(void *, void *));
t_slist *gs_slist_find_min(t_slist *list, int (*cmp)(void *, void *));

void	*gs_slist_del(t_slist **begin_list);
void	*gs_slist_del_at(t_slist **begin_list, pos_t i);

char	**gs_slist_toarray(t_slist **begin_list, size_t size);

#endif
