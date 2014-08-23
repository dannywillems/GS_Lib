#ifndef GS_PROTOTYPES_H
# define GS_PROTOTYPES_H

# include "gs_slist.h"

# include <stdlib.h>

t_slist	*gs_slist_create(void *data);
void	gs_slist_clear(t_slist **begin_list);
void	gs_slist_sort(t_slist **list, int (*cmp)());
t_slist	*gs_slist_find(t_slist *begin_list, void *data_ref, int (*cmp)());
int		gs_slist_size(t_slist *begin_list);
t_slist	*gs_slist_last(t_slist *begin_list);
void	gs_slist_merge(t_slist **begin_list, t_slist *begin_list2);
void	gs_slist_reverse_fun(t_slist *begin_list);
void	gs_slist_remove_if(t_slist **begin_list, void *data_ref, int (*cmp)());
void	gs_slist_push_front(t_slist **begin_list, void *data);
void	gs_slist_push_back(t_slist **begin_list, void *data);
t_slist	*gs_slist_at(t_slist *begin_list, unsigned int nbr);

#endif
