#include "gs_stack.h"
#include "gs_prototypes.h"

char	**gs_stack_toarray(t_stack *stack, bool_t delete_stack)
{
	t_snode		*node;
	char		**array_str;
	count_t		i;

	if (stack)
	{
		array_str = (char **)malloc(sizeof(char *) * (stack->size + 1));
		i = 0;
		if (array_str)
		{
			node = stack->head;
			while (node)
			{
				array_str[i] = (char *)(node->data);
				i++;
				node = node->next;
			}
			array_str[stack->size] = "\0";
		}
		if (delete_stack)
			gs_stack_clear(&stack);
		return (array_str);
	}
	return (NULL);

}
