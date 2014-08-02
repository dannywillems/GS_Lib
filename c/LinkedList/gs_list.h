#ifndef GS_LIST_H
# define GS_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list		*gs_create_elem(void *data);
void		gs_list_clear(t_list **begin_list);
void        gs_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
void        gs_list_sort(t_list **list, int (*cmp)());
t_list      *gs_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
int         gs_list_size(t_list *begin_list);
t_list		*gs_list_last(t_list *begin_list);
void        gs_list_merge(t_list **begin_list, t_list *begin_list2);
void        gs_list_reverse_fun(t_list *begin_list);
void        gs_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
void		gs_list_push_front(t_list **begin_list, void *data);
void		gs_list_push_back(t_list **begin_list, void *data);

#endif
