#ifndef GS_SLIST_H
# define GS_SLIST_H

typedef struct		s_slist
{
	struct s_slist	*next;
	void			*data;
}					t_slist;

#endif
