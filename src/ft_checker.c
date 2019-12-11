/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:26:19 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/08 14:23:03 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		ft_init_stack(t_stack *stack, char c, char **tmp)
{
	stack->stack = NULL;
	stack->n_elem = ft_array_len(tmp);
	stack->max_malloc = stack->n_elem;
	stack->no = c;
}

static void	ft_free_all(t_stack *a, t_list **array_ref)
{
	ft_n_tab_del(a->stack, a->n_elem);
	a->n_elem = 0;
	a->no = 0;
	ft_lst_free(array_ref);
	array_ref = NULL;
}

int			main(int ac, char **av)
{
	t_list	*list;
	char	**tmp;
	t_stack	a;
	t_stack	b;

	tmp = NULL;
	if (!(tmp = ft_argument_recovering(av + 1, ac - 1)))
		return (ft_error());
	if (tmp == (char**)-1)
		return (0);
	ft_init_stack(&a, 'A', tmp);
	ft_init_stack(&a, 'B', tmp);
	if (!(a.stack = ft_argument_conversion(tmp)))
		return (ft_error());
	if (!(list = ft_instruction_recovering(0)))
	{
		ft_n_tab_del(a.stack, a.n_elem);
		return (ft_error());
	}
	ft_apply_instruction(&a, &b, list);
	ft_print_result(a, b);
	ft_free_all(&a, &list);
	return (0);
}
