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
	t_slist *second;
	int i;

	second = NULL;
	l = NULL;

	l = gs_slist_create();
	second = gs_slist_create();
	
	gs_slist_push_front(second, "first elem of second list");
	gs_slist_push_front(l, argv[0]);
	for(i = 1;i < argc;i++)
		gs_slist_push_back(l, argv[i]);
	
	gs_slist_push_back(l, "last elem before merging");

	gs_slist_merge(&l, second);
	gs_slist_clear(&second);
	
	gs_slist_print(l, &convert);

	char **t = gs_slist_toarray(l, 0);
	l = NULL;
	while (*t)
	{
		write(1, *t, sizeof(*t));
		t++;
	}


return (0);	
}
