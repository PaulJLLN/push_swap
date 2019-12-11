/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:26:43 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:27:27 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		ft_swap(t_stack *stack, int idx_1, int idx_2, t_list **array)
{
	int		tmp;

	if (stack->n_elem < 2)
		return ;
	tmp = stack->stack[idx_1];
	stack->stack[idx_1] = stack->stack[idx_2];
	stack->stack[idx_2] = tmp;
	if (stack->no == 'A' && array)
		ft_lst_push_back(array, "sa", 2);
	else if (stack->no == 'B' && array)
		ft_lst_push_back(array, "sb", 2);
}

static void	ft_slide(t_stack *stack, int direction)
{
	int		i;

	i = 0;
	if (!stack || !stack->stack)
		return ;
	if (direction == DOWN && stack->n_elem > 0)
	{
		i = (stack->max_malloc == stack->n_elem
		? stack->n_elem - 2 : stack->n_elem - 1);
		while (i >= 0)
		{
			stack->stack[i + 1] = stack->stack[i];
			i -= 1;
		}
	}
	else if (direction == UP && stack->n_elem > 0)
	{
		i = 0;
		while (i < stack->n_elem - 1)
		{
			stack->stack[i] = stack->stack[i + 1];
			i += 1;
		}
	}
}

void		ft_push(t_stack *a, t_stack *b, t_list **array)
{
	if (a->n_elem == 0)
		return ;
	ft_slide(b, DOWN);
	b->stack[0] = a->stack[0];
	b->n_elem += 1;
	ft_slide(a, UP);
	a->stack[a->n_elem - 1] = NULL_VALUE;
	a->n_elem -= 1;
	if (a->no == 'A')
		ft_lst_push_back(array, "pb", 2);
	else if (a->no == 'B')
		ft_lst_push_back(array, "pa", 2);
}

void		ft_rotate(t_stack *stack, int direction, t_list **array)
{
	int		tmp;

	if (stack->n_elem == 0)
		return ;
	if (direction == UP)
	{
		tmp = stack->stack[0];
		ft_slide(stack, UP);
		stack->stack[stack->n_elem - 1] = tmp;
		if (stack->no == 'A' && array)
			ft_lst_push_back(array, "ra", 2);
		else if (stack->no == 'B' && array)
			ft_lst_push_back(array, "rb", 2);
	}
	else if (direction == DOWN)
	{
		tmp = stack->stack[stack->n_elem - 1];
		stack->stack[stack->n_elem - 1] = NULL_VALUE;
		ft_slide(stack, DOWN);
		stack->stack[0] = tmp;
		if (stack->no == 'A' && array)
			ft_lst_push_back(array, "rra", 3);
		else if (stack->no == 'B' && array)
			ft_lst_push_back(array, "rrb", 3);
	}
}
