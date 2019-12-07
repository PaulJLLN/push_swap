CHECKER = checker
PUSH_SWAP = push_swap
CC = gcc
CFLAG = -Wall -Werror -Wextra -g3
CFLAG += -fsanitize=address,undefined
LIB = libft/libft.a


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

all: libft_comp $(CHECKER) $(PUSH_SWAP)

libft_comp:
	make -C libft

$(CHECKER) : $(PATH_OBJ) $(PATH_CHECKER_OBJ) 
	$(CC) $(CFLAG) -o $(CHECKER) $(PATH_OBJ) $(PATH_CHECKER_OBJ) $(LIB)

$(PUSH_SWAP) : $(PATH_OBJ) $(PATH_PUSH_SWAP_OBJ)
	$(CC) $(CFLAG) -o $(PUSH_SWAP) $(PATH_OBJ) $(PATH_PUSH_SWAP_OBJ) $(LIB)

$(addprefix obj/, %.o): $(addprefix src/, %.c)
	$(CC) $(CFLAG) -c $< -o $@

lib_clean:
	make clean -C libft/

lib_fclean:
	make fclean -C libft/

clean: lib_clean
	rm -f $(PATH_OBJ) $(PATH_CHECKER_OBJ) $(PATH_PUSH_SWAP_OBJ)

fclean: lib_fclean clean
	rm -f $(CHECKER) $(PUSH_SWAP)

re: fclean all

.PHONY : libft clean fclean re comp lib_clean lib_fclean
