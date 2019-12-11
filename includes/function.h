/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 00:07:31 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/08 13:12:35 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H

# define FUNCTION_H

void			ft_advanced_sort(t_stack *a, t_stack *b,
				t_list **list, int len);
void			ft_apply_instruction(t_stack *a, t_stack *b, t_list *list);
long			*ft_argument_conversion(char **array);
char			**ft_argument_recovering(char **av, size_t len);
char			**ft_argument_validity_checking(char **array);
void			ft_basic_sort(t_stack *a, t_stack *b, t_list **array);
void			ft_bubble_sort(long *tab, int len);
void			ft_divide_stack_a(t_stack *a, t_stack *b,
				t_list **array, int len);
t_list			*ft_instruction_recovering(int fd);
void			ft_rotate(t_stack *stack, int direction, t_list **array);
void			ft_push(t_stack *a, t_stack *b, t_list **array);
void			ft_swap(t_stack *stack, int idx_1, int idx_2,
				t_list **array);
long			ft_instruction_validity_checking(t_list *list);
unsigned long	ft_power_signed(long nb, long pow);
void			ft_reverse_advanced_sort(t_stack *a, t_stack *b,
				t_list **array, int len);
void			ft_reverse_basic_sort(t_stack *a, t_stack *b,
				t_list **array);
void			ft_set_stat(t_stack *stack, size_t len);
int				ft_sorted_list_checking(long *tab, int len);
int				ft_find_median(t_stack *stack, int len);
int				ft_sorted_list_checking_decreasing(long *tab, int len);
int				ft_error(void);
void			ft_print_result(t_stack a, t_stack b);
void			ft_init_stack(t_stack *stack, char c, char **tmp);
#endif
