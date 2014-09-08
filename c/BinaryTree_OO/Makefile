NAME = libbtree.a

FLAGS	= -Wall -Werror -Wextra
fPIC	=

SRC_DIR =	srcs
OBJ_DIR =	objs
INC		=	includes

SRC =	$(wildcard $(SRC_DIR)/*.c)

OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC)) 


dynamic:	fPIC = -fPIC

all: $(NAME)

$(NAME): static

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	gcc -I$(INC) $(FLAGS) $(fPIC) -c $< -o $@

static: check_dir $(OBJ)
	ar -r $(NAME) $(OBJ)
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
