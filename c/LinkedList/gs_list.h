#ifndef GS_LIST_H
# define GS_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*gs_create_elem(void *data);
void	gs_list_clear(t_list **begin_list);

#endif
