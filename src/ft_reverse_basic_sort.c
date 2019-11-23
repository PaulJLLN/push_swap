/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_basic_sort.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:51:57 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/16 18:05:52 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_three_elem_sort(t_stack *b, t_list **array)
{
	if (b->stack[0] == b->min)
	{
		ft_rotate(b, UP, array);
		if (b->stack[0] != b->max)
			ft_swap(b, 0, 1, array);
	}
	else if (b->stack[0] == b->max)
	{
		if (b->stack[1] == b->min)
		{
			ft_rotate(b, DOWN, array);
			ft_swap(b, 0, 1, array);
		}
	}
	else
	{
		if (b->stack[1] == b->max)
			ft_swap(b, 0, 1, array);
		else
			ft_rotate(b, DOWN, array);
	}
}

void	ft_reverse_four_elem_sort(t_stack *a, t_stack *b, t_list **array)
{
	if (b->stack[1] == b->max)
		ft_swap(b, 0, 1, array);
	else if (b->stack[2] == b->max)
	{
		ft_rotate(b, UP, array);
		ft_rotate(b, UP, array);
	}
	else if (b->stack[3] == b->max)
		ft_rotate(b, DOWN, array);
	ft_push(b, a, array);
	ft_set_stat(b, 3);
	ft_reverse_three_elem_sort(b, array);
	ft_push(a, b, array);
}

void	ft_reverse_five_elem_sort(t_stack *a, t_stack *b, t_list **array)
{
	if (b->stack[1] == b->max)
		ft_swap(b, 0, 1, array);
	else if (b->stack[2] == b->max)
	{
		ft_rotate(b, UP, array);
		ft_rotate(b, UP, array);
	}
	else if (b->stack[3] == b->max)
	{
		ft_rotate(b, DOWN, array);
		ft_rotate(b, DOWN, array);
	}
	else if (b->stack[4] == b->max)
		ft_rotate(b, DOWN, array);
	ft_push(b, a, array);
	ft_set_stat(b, 4);
	ft_reverse_four_elem_sort(a, b, array);
	ft_push(a, b, array);
}

void	ft_reverse_basic_sort(t_stack *a, t_stack *b, t_list **array)
{
	ft_set_stat(b, b->n_elem);
	if (b->n_elem == 3)
		ft_reverse_three_elem_sort(b, array);
	if (b->n_elem == 4)
		ft_reverse_four_elem_sort(a, b, array);
	if (b->n_elem == 5)
		ft_reverse_five_elem_sort(a, b, array);
}
