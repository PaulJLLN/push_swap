/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 11:01:06 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/11 15:34:36 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int			ft_error()
{
	ft_putendl_fd("Error", 2);
	return (0);
}

void		ft_init_stack(t_stack *stack, char c)
{
	stack->stack = NULL;
	stack->n_elem = 0;
	stack->no = c;
}

int main(int ac, char **av)
{
	char	**tmp;
	t_list	*list;
	t_stack	a;
	t_stack b;
	int		i;

	i = 0;
	ft_init_stack(&a, 'A');
	ft_init_stack(&b, 'B');
	list = NULL;
	if (!(tmp = ft_argument_recovering(av + 1, ac - 1)))
		return (ft_error());
	a.n_elem = ft_array_len(tmp);
	if (!(a.stack = ft_argument_conversion(tmp)))
	{
		ft_del_array(tmp);
		return (ft_error());
	}
	if (!(b.stack = (long *)malloc(sizeof(long) * a.n_elem)))
		return (0);
	while (i < a.n_elem)
		b.stack[i++] = NULL_VALUE;
	ft_divide_stack_a(&a, &b, &list, a.n_elem);
	ft_print_lst(list);
	return (0);
}
