NAME = libft.a

CFLAG = -Wall -Werror -Wextra

SRC =	ft_add_array.c \
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
		
OBJ = $(SRC:.c=.o)
PATH_SRC = $(addprefix src/, $(SRC))
PATH_OBJ = $(addprefix obj/, $(OBJ))

all: $(NAME)

$(NAME): $(PATH_OBJ)
	ar rc $@ $(PATH_OBJ)
	ranlib $@

$(addprefix obj/, %.o): $(addprefix src/, %.c)
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(PATH_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
