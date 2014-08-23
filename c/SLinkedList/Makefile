NAME = libslist.a

FLAGS	=	-Wall -Wextra -Werror
fPIC	=

SRC_DIR =	srcs
OBJ_DIR =	objs
INC		=	includes

SRC 	=	$(SRC_DIR)/gs_slist_create.c $(SRC_DIR)/gs_slist_clear.c \
			$(SRC_DIR)/gs_slist_find.c $(SRC_DIR)/gs_slist_last.c \
			$(SRC_DIR)/gs_slist_merge.c $(SRC_DIR)/gs_slist_push_back.c \
			$(SRC_DIR)/gs_slist_push_front.c $(SRC_DIR)/gs_slist_remove_if.c \
			$(SRC_DIR)/gs_slist_reverse.c $(SRC_DIR)/gs_slist_size.c \
			$(SRC_DIR)/gs_slist_sort.c $(SRC_DIR)/gs_slist_find_max.c \
			$(SRC_DIR)/gs_slist_find_min.c
OBJ		=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

dynamic: fPIC = -fPIC

all: $(NAME)

$(NAME): static

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -I$(INC) $(FLAGS) $(fPIC) -c $< -o $@

static: check_dir $(OBJ) 
	ar -r $(NAME) $(OBJ)
	ranlib $(NAME)

dynamic: check_dir $(OBJ)

check_dir:
	if [ ! -d $(OBJ_DIR) ]; then mkdir $(OBJ_DIR); fi;

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
