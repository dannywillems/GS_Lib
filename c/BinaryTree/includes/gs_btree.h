#ifndef GS_BTREE_H
# define GS_BTREE_H

typedef struct	s_btree
{
	struct s_btree		*parent;
	struct s_btree		*left_child;
	struct s_btree		*right_child;
	void				*data;
}				t_btree;

#endif
