#include "gs_queue.h"
#include "gs_prototypes.h"

char	**gs_queue_toarray(t_queue *queue, bool_t delete_queue)
{
	t_dnode		*node;
	char		**array_str;
	count_t		i;

	if (queue)
	{
		array_str = (char **)malloc(sizeof(char *) * (queue->size + 1));
		i = 0;
		if (array_str)
		{
			node = queue->head;
			while (node)
			{
				array_str[i] = (char *)(node->data);
				i++;
				node = node->next;
			}
			array_str[queue->size] = "\0";
		}
		if (delete_queue)
			gs_queue_clear(&queue);
		return (array_str);
	}
	return (NULL);

}
