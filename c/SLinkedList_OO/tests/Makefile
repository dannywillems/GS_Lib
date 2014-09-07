NAME = test_slist

LIB		=	slist
LIB_DIR	=	../
FLAGS	=	-Wall -Wextra -Werror
INC		=	../includes

all: $(NAME)

$(NAME): 
	gcc -I$(INC) $(FLAGS) test_slist.c -o $(NAME) -l$(LIB) -L$(LIB_DIR)

clean:
	rm -f $(NAME)

re: clean all
