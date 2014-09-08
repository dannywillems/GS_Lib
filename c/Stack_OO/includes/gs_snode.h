#ifndef GS_SNODE_H
# define GS_SNODE_H

typedef struct		s_snode
{
	struct s_snode	*next;
	void			*data;
}					t_snode;

#endif
