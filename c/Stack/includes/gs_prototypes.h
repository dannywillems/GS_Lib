#ifndef GS_PROTOTYPES_H
# define GS_PROTOTYPES_H

# include "gs_stack.h"

# include <stdlib.h>

t_stack	*gs_stack_create(void *data);
void	gs_stack_clear(t_stack **begin_stack);
void	gs_stack_sort(t_stack **stack, int (*cmp)());
t_stack	*gs_stack_find(t_stack *begin_stack, void *data_ref, int (*cmp)());
int		gs_stack_size(t_stack *begin_stack);
t_stack	*gs_stack_last(t_stack *begin_stack);
void	gs_stack_merge(t_stack **begin_stack, t_stack *begin_stack2);
void	gs_stack_reverse_fun(t_stack *begin_stack);
void	gs_stack_remove_if(t_stack **begin_stack, void *data_ref, int (*cmp)());
void	gs_stack_push_front(t_stack **begin_stack, void *data);
void	gs_stack_push_back(t_stack **begin_stack, void *data);
t_stack	*gs_stack_at(t_stack *begin_stack, unsigned int nbr);
t_stack *gs_stack_find_max(t_stack *stack, int (*cmp)(void *, void *));
t_stack *gs_stack_find_min(t_stack *stack, int (*cmp)(void *, void *));

void	gs_stack_del(t_stack **begin_list);
void	gs_stack_pop(t_stack **begin_list);

#endif
