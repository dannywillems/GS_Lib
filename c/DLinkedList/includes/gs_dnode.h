#ifndef GS_DNODE_H
# define GS_DNODE_H

typedef struct		s_dnode
{
	struct s_dnode	*previous;
	struct s_dnode	*next;
	void			*data;
}					t_dnode;

#endif
