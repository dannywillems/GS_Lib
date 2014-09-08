GS_Lib
===========

GS_Lib provides a library, essentially for data structures, in different languages.
The GS_Lib main feature, and advantage is all methods, all data structures definitions are the same in each languages.
(NB : In some no-OO languages, data structures methods begin with the data structures name)

For example :

	Python:
		list = GS_SList()
		list.push_front("hello")
		list.push_back("World")
		list.sort()
	C:
		list = gs_slist_create()
		gs_slist_push_front(list, "hello")
		gs_slist_push_data(list, "World")
		gs_slist_sort(list, &strcmp);
