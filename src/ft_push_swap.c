/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 11:01:06 by pauljull          #+#    #+#             */
/*   Updated: 2019/12/07 14:44:07 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		ft_init_stack(t_stack *stack, char c)
{
	stack->stack = NULL;
	stack->n_elem = 0;
	stack->no = c;
}

void		ft_free_all(t_stack *a, t_stack *b, t_list **list)
{
	ft_n_tab_del(a->stack, a->n_elem);
	ft_n_tab_del(b->stack, b->n_elem);
	a->n_elem = 0;
	a->no = 0;
	b->n_elem = 0;
	b->no = 0;
	ft_lst_free(list);
}

int			main(int ac, char **av)
{
	char	**tmp;
	t_list	*list;
	t_stack	a;
	t_stack	b;
	int		i;

	i = 0;
	ft_init_stack(&a, 'A');
	ft_init_stack(&b, 'B');
	list = NULL;
	if (!(tmp = ft_argument_recovering(av + 1, ac - 1)))
		return (ft_error());
	a.n_elem = ft_array_len(tmp);
	if (!(a.stack = ft_argument_conversion(tmp)))
		return (ft_error());
	if (!(b.stack = (long *)malloc(sizeof(long) * a.n_elem)))
		return (0);
	while (i < a.n_elem)
		b.stack[i++] = NULL_VALUE;
	ft_divide_stack_a(&a, &b, &list, a.n_elem);
	ft_print_lst(list);
	ft_free_all(&a, &b, &list);
	return (0);
}
