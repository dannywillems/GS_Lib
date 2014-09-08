#ifndef GS_PROTOTYPES_H
# define GS_PROTOTYPES_H

# include "gs_stack.h"
# include "gs_typedef.h"

# include <stdlib.h>

t_snode	*gs_snode_create(void *data);
void	gs_snode_del(t_snode **node);

t_stack	*gs_stack_create();
void	gs_stack_clear(t_stack **begin_stack);
void	*gs_stack_del_at(t_stack *stack, pos_t i);

size_t	gs_stack_size(t_stack *begin_stack);
t_snode	*gs_stack_first(t_stack *stack);
t_snode	*gs_stack_last(t_stack *stack);
bool_t	gs_stack_isempty(t_stack *stack);

void	gs_stack_push(t_stack *stack, void *data);
void	*gs_stack_pop(t_stack *stack);

void	gs_stack_push_front(t_stack *stack, void *data);
void	gs_stack_push_back(t_stack *stack, void *data);
void	gs_stack_merge(t_stack **stack1, t_stack *stack2);

t_stack	*gs_stack_reverse(t_stack *begin_stack);
void	gs_stack_sort(t_stack *stack, int (*cmp)(void *, void *));

t_snode	*gs_stack_at(t_stack *begin_stack, pos_t i);
t_snode	*gs_stack_find(const t_stack *stack, void *data_ref, int (*cmp)());
t_snode *gs_stack_find_max(const t_stack *stack, int (*cmp)(void *, void *));
t_snode *gs_stack_find_min(const t_stack *stack, int (*cmp)(void *, void *));

char	**gs_stack_toarray(t_stack *begin_stack, bool_t delete_stack);

void	gs_stack_print(t_stack *stack, void (*print_data)(void *));
#endif
