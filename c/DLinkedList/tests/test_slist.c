#include "gs_slist.h"
#include "gs_prototypes.h"
#include <unistd.h>

void	convert(void *data)
{
	char *d;

	d = (char *)data;
	while (*d)
	{
		write(1, d, 1);
		d++;
	}
}

int		main(int argc, char **argv)
{
	t_slist *l;
	int i;

	l = NULL;
	l = gs_slist_create();
	gs_slist_push_front(l, argv[0]);
	for(i = 1;i < argc;i++)
		gs_slist_push_back(l, argv[i]);
	gs_slist_push_back(l, "last elem before merging");
	gs_slist_print(l, &convert);
	write(1, "\n", 1);
	
	gs_slist_del_at(l, 2);
	gs_slist_print(l, &convert);
	write(1, "\n", 1);
	
	gs_slist_del_at(l, 1);
	gs_slist_print(l, &convert);
	write(1, "\n", 1);

	gs_slist_clear(&l);
return (0);	
}
