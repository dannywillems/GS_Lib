#ifndef GS_BTNODE_H
# define GS_BTNODE_H

typedef struct	s_btnode
{
	struct s_btnode		*parent;
	struct s_btnode		*left_child;
	struct s_btnode		*right_child;
	void				*data;
}				t_btnode;

#endif
