NAME = liblinkedlist.a

FLAGS	=	-Wall -Wextra -Werror
SRC_DIR =	srcs
OBJ_DIR =	objs
INC		=	includes

SRC 	=	$(SRC_DIR)/gs_create_list.c $(SRC_DIR)/gs_list_clear.c \
			$(SRC_DIR)/gs_list_find.c $(SRC_DIR)/gs_list_last.c \
			$(SRC_DIR)/gs_list_merge.c $(SRC_DIR)/gs_list_push_back.c \
			$(SRC_DIR)/gs_list_push_front.c $(SRC_DIR)/gs_list_remove_if.c \
			$(SRC_DIR)/gs_list_reverse.c $(SRC_DIR)/gs_list_size.c \
			$(SRC_DIR)/gs_list_sort.c
OBJ		=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -I$(INC) $(FLAGS) -c $< -o $@

$(NAME): check_dir $(OBJ) 
	ar -r $(NAME) $(OBJ)
	ranlib $(NAME)

check_dir:
	if [ ! -d $(OBJ_DIR) ]; then mkdir $(OBJ_DIR); fi;

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
