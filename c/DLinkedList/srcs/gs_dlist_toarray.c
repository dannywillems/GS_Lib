#include "gs_dlist.h"
#include "gs_prototypes.h"

char	**gs_dlist_toarray(t_dlist *list, bool_t delete_list)
{
	t_dnode		*node;
	char		**array_str;
	count_t		i;

	if (list)
	{
		array_str = (char **)malloc(sizeof(char *) * (list->size + 1));
		i = 0;
		if (array_str)
		{
			node = list->head;
			while (node)
			{
				array_str[i] = (char *)(node->data);
				i++;
				node = node->next;
			}
			array_str[list->size] = "\0";
		}
		if (delete_list)
			gs_dlist_clear(&list);
		return (array_str);
	}
	return (NULL);

}
