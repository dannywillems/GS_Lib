NAME = libbtree.a

FLAGS	= -Wall -Werror -Wextra
fPIC	=

SRC_DIR =	srcs
OBJ_DIR =	objs
INC		=	includes

SRC =	$(SRC_DIR)/gs_btree_create.c $(SRC_DIR)/gs_btree_is_full.c \
		$(SRC_DIR)/gs_btree_height.c $(SRC_DIR)/gs_btree_size.c \
		$(SRC_DIR)/gs_btree_apply_prefix.c $(SRC_DIR)/gs_btree_apply_infix.c \
		$(SRC_DIR)/gs_btree_apply_suffix.c $(SRC_DIR)/gs_slist_push_back.c \
		$(SRC_DIR)/gs_btree_nsearch_prefix.c $(SRC_DIR)/gs_slist_create.c \
		$(SRC_DIR)/gs_btree_nsearch_infix.c \
		$(SRC_DIR)/gs_btree_nsearch_suffix.c

OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC)) 


dynamic:	fPIC = -fPIC

all: $(NAME)

$(NAME): static

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	gcc -I$(INC) $(FLAGS) $(fPIC) -c $< -o $@

static: check_dir $(OBJ)
	ar -r $(NAME) $(OBJS)
	ranlib $(NAME)

dynamic: check_dir $(OBJ)
	echo "Nothing now"

check_dir:
	if [ ! -d $(OBJ_DIR) ]; then mkdir $(OBJ_DIR); fi;

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
