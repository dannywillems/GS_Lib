NAME=liblinkedlist.a

.PHONY: $(NAME) all makeLib clean fclean re

SRCS=srcs/gs_create_elem.c srcs/gs_list_clear.c srcs/gs_list_find.c \
	srcs/gs_list_last.c srcs/gs_list_merge.c srcs/gs_list_push_back.c \
	srcs/gs_list_push_front.c srcs/gs_list_remove_if.c \
	srcs/gs_list_reverse_fun.c srcs/gs_list_size.c srcs/gs_list_sort.c
OBJS=gs_create_elem.o gs_list_clear.o gs_list_find.o \
	gs_list_last.o gs_list_merge.o gs_list_push_back.o \
	gs_list_push_front.o gs_list_remove_if.o \
	gs_list_reverse_fun.o gs_list_size.o gs_list_sort.o

INC=includes
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): makeLib

makeLib:
	gcc -I$(INC) $(FLAGS) -c $(SRCS)
	ar -r $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
