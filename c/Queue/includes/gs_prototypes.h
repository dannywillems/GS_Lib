#ifndef GS_PROTOTYPES_H
# define GS_PROTOTYPES_H

# include "gs_queue.h"
# include "gs_typedef.h"

# include <stdlib.h>

t_dnode	*gs_dnode_create(void *data);
void	gs_dnode_del(t_dnode **node);

t_queue	*gs_queue_create();
void	gs_queue_clear(t_queue **queue);
void	*gs_queue_del_at(t_queue *queue, pos_t i);

size_t	gs_queue_size(t_queue *queue);
t_dnode	*gs_queue_first(t_queue *queue);
t_dnode	*gs_queue_last(t_queue *queue);
bool_t	gs_queue_isempty(t_queue *queue);

void	gs_queue_enqueue(t_queue *queue, void *data);
void	*gs_queue_dequeue(t_queue *queue);

void	gs_queue_push_front(t_queue *queue, void *data);
void	gs_queue_push_back(t_queue *queue, void *data);
void	gs_queue_merge(t_queue **queue1, t_queue *queue2);

t_queue	*gs_queue_reverse(t_queue *queue);
void	gs_queue_sort(t_queue *queue, int (*cmp)(void *, void *));

t_dnode	*gs_queue_at(t_queue *queue, pos_t i);
t_dnode	*gs_queue_find(const t_queue *queue, void *data_ref, int (*cmp)());
t_dnode *gs_queue_find_max(const t_queue *queue, int (*cmp)(void *, void *));
t_dnode *gs_queue_find_min(const t_queue *queue, int (*cmp)(void *, void *));

char	**gs_queue_toarray(t_queue *queue, bool_t delete_queue);

void	gs_queue_print(t_queue *queue, void (*print_data)(void *));
#endif
