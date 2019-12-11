CHECKER = checker
PUSH_SWAP = push_swap

CC = clang

CFLAG = -Wall -Werror -Wextra -g3

LIB = libft/libft.a

INC = includes/function.h
INC += includes/macro.h
INC += includes/push_swap.h
INC += includes/structure.h

SRC =	ft_advanced_sort.c \
		ft_apply_instruction.c \
		ft_argument_recovering.c \
		ft_argument_validity_checking.c \
		ft_argument_conversion.c \
		ft_basic_sort.c \
		ft_bubble_sort.c \
		ft_divide_conquer.c \
		ft_find.c \
		ft_instruction_recovering.c \
		ft_instruction_stack.c \
		ft_instruction_validity_checking.c \
		ft_power.c \
		ft_reverse_advanced_sort.c \
		ft_reverse_basic_sort.c \
		ft_set_stat.c \
		ft_sorted_list_checking.c \
		ft_print.c \

LIB_DEPENDS = 	ft_add_array.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_strcpy.c \
				ft_strncpy.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strnstr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_memalloc.c \
				ft_memdel.c \
				ft_strnew.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strsub.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strsplit.c \
				ft_itoa.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_lstnew.c \
				ft_lstdelone.c \
				ft_lstdel.c \
				ft_lstadd.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_lst_push_back.c \
				ft_strjoinf.c\
				ft_higher_value.c \
				ft_nb_digit.c \
				get_next_line.c \
				ft_list_last.c \
				ft_print_lst.c \
				ft_lst_len.c \
				ft_atoi_move.c \
				ft_atol_move.c \
				ft_is_operator.c \
				ft_is_whitespace.c \
				ft_is_number.c \
				ft_skip_whitespace.c \
				ft_eval_expr.c \
				ft_arithmetic_operation.c \
				ft_split_whitespace.c \
				ft_print_array.c \
				ft_array_add_element.c \
				ft_free_array.c \
				ft_fill_array.c \
				ft_array_init.c \
				ft_list_to_array.c \
				ft_array_alloc.c \
				ft_array_len.c \
				ft_array_elem_cmp.c \
				ft_del_array.c \
				ft_strclen.c \
				ft_strcdup.c \
				ft_n_tab_del.c \
				ft_print_tab.c \
				ft_tabdup.c \
				ft_digit.c \
				ft_print_char.c \
				ft_strpdupf.c \
				ft_lst_free.c \
				ft_number_len_str.c \
				ft_number_move_str.c \

LIB_INC = 	libft/includes/libft.h \
			libft/includes/get_next_line.h \

CHECKER_SRC = ft_checker.c
CHECKER_OBJ = $(CHECKER_SRC:.c=.o)

PUSH_SWAP_SRC = ft_push_swap.c
PUSH_SWAP_OBJ = $(PUSH_SWAP_SRC:.c=.o)

OBJ = $(SRC:.c=.o)
LIB = libft/libft.a
PATH_SRC = $(addprefix src/, $(SRC))
PATH_OBJ = $(addprefix obj/, $(OBJ))

PATH_CHECKER_SRC = $(addprefix src/, $(CHECKER_SRC))
PATH_CHECKER_OBJ = $(addprefix obj/, $(CHECKER_OBJ))

PATH_PUSH_SWAP_SRC = $(addprefix src/, $(PUSH_SWAP_SRC))
PATH_PUSH_SWAP_OBJ = $(addprefix obj/, $(PUSH_SWAP_OBJ))

PATH_LIB = $(addprefix libft/src/, $(LIB_DEPENDS))

all: libft/libft.a $(CHECKER) $(PUSH_SWAP)

libft/libft.a: $(PATH_LIB) $(LIB_INC)
	@make -C libft

$(CHECKER) : $(LIB) $(PATH_OBJ) $(PATH_CHECKER_OBJ) $(INC)
	@$(CC) $(CFLAG) -o $(CHECKER) $(PATH_OBJ) $(PATH_CHECKER_OBJ) $(LIB)
	@printf "Checker\n"

$(PUSH_SWAP) : $(LIB) $(PATH_OBJ) $(PATH_PUSH_SWAP_OBJ) $(INC)
	@$(CC) $(CFLAG) -o $(PUSH_SWAP) $(PATH_OBJ) $(PATH_PUSH_SWAP_OBJ) $(LIB)
	@printf "Push_swap\n"

$(addprefix obj/, %.o): $(addprefix src/, %.c)
	@$(CC) $(CFLAG) -c $< -o $@

lib_clean:
	@make clean -C libft/

lib_fclean:
	@make fclean -C libft/

clean: lib_clean
	@rm -f $(PATH_OBJ) $(PATH_CHECKER_OBJ) $(PATH_PUSH_SWAP_OBJ)

fclean: lib_fclean clean
	@rm -f $(CHECKER) $(PUSH_SWAP)

re: fclean all

.PHONY : clean fclean re comp lib_clean lib_fclean
