################################################################################
############################ Variables to change ###############################
##### Executable or library name
NAME					= gslib

##### Source files
MLI_DIRECTORY			= src
ML_DIRECTORY			= $(MLI_DIRECTORY)
CMO_DIRECTORY			= $(MLI_DIRECTORY)
CMI_DIRECTORY			= $(MLI_DIRECTORY)
TEST_BUILD_DIRECTORY	= $(MLI_DIRECTORY)

MLI_FILES				= $(wildcard $(MLI_DIRECTORY)/sequence.mli)
ML_FILES 				= $(patsubst $(MLI_DIRECTORY)/%.mli, $(ML_DIRECTORY)/%.ml, $(MLI_FILES))

CMI_FILES 				= $(patsubst $(MLI_DIRECTORY)/%.mli, $(CMI_DIRECTORY)/%.cmi, $(MLI_FILES))
CMO_FILES 				= $(patsubst $(ML_DIRECTORY)/%.ml, $(CMO_DIRECTORY)/%.cmo, $(ML_FILES))

TEST_DIRECTORY			= $(MLI_DIRECTORY)
TEST_FILES				= $(patsubst $(ML_DIRECTORY)/%.ml, $(TEST_DIRECTORY)/%_test.ml, $(ML_FILES))
TEST_NATIVE				= $(patsubst $(TEST_DIRECTORY)/%.ml, $(TEST_BUILD_DIRECTORY)/%.native, $(TEST_FILES))

################################################################################

################################################################################
############################ Constant variables ################################
##### Compilers
CAMLC		= ocamlc
################################################################################

################################################################################
################################## Rules #######################################
.PHONY: all $(NAME) check_dir test run_test clean fclean re

all: $(NAME)

$(NAME): compile
	ocamlc -a -o $(NAME).cma $(CMO_FILES)

compile: $(CMI_FILES) $(CMO_FILES)

##### Rules for compilation
$(CMO_DIRECTORY)/%.cmo: $(ML_DIRECTORY)/%.ml
	$(CAMLC) -c -o $@ -I $(MLI_DIRECTORY) -I $(CMI_DIRECTORY) -I $(CMO_DIRECTORY) $<
$(CMI_DIRECTORY)/%.cmi: $(MLI_DIRECTORY)/%.mli
	$(CAMLC) -c -o $@ -I $(MLI_DIRECTORY) -I $(CMI_DIRECTORY) -I $(CMO_DIRECTORY) $<

test: compile $(TEST_FILES)

run_test: fclean $(TEST_NATIVE)

$(TEST_DIRECTORY)/%_test.ml: $(ML_DIRECTORY)/%.ml
	qtest -o $@ extract $<

$(TEST_BUILD_DIRECTORY)/%.native: $(TEST_DIRECTORY)/%.ml
	@ocamlbuild -cflags -warn-error,+26 -use-ocamlfind -package oUnit -package qcheck $@
	@./$(shell basename $@)

##### Rules for clean
clean:
	$(RM) $(CMO_FILES) $(CMI_FILES)

clean_test:
	$(RM) $(TEST_FILES) $(TEST_NATIVE)
	$(RM) qtest.targets.log
	ocamlbuild -clean

fclean: clean_test clean
	$(RM) $(NAME).cma

re: fclean all
################################################################################
