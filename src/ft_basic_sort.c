/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 09:27:27 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/23 13:11:53 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_three_elem_sort(t_stack *a, t_list **array)
{
	if (a->stack[0] == a->min)
	{
		if (a->stack[1] > a->stack[2])
		{
			ft_swap(a, 0, 1, array);
			ft_rotate(a, UP, array);
		}
	}
	else if (a->stack[0] == a->max)
	{
		if (a->stack[1] > a->stack[2])
		{
			ft_swap(a, 0, 1, array);
			ft_rotate(a, DOWN, array);
		}
		else
			ft_rotate(a, UP, array);
	}
	else
	{
		if (a->stack[1] > a->stack[2])
			ft_rotate(a, DOWN, array);
		else
			ft_swap(a, 0, 1, array);
	}
}

void	ft_four_elem_sort(t_stack *a, t_stack *b, t_list **array)
{
	if (a->stack[1] == a->min)
		ft_swap(a, 0, 1, array);
	else if (a->stack[2] == a->min)
	{
		ft_rotate(a, UP, array);
		ft_rotate(a, UP, array);
	}
	else if (a->stack[3] == a->min)
		ft_rotate(a, DOWN, array);
	ft_push(a, b, array);
	ft_set_stat(a, 3);
	ft_three_elem_sort(a, array);
	ft_push(b, a, array);
}

void	ft_five_elem_sort(t_stack *a, t_stack *b, t_list **array)
{
	if (a->stack[1] == a->min)
		ft_swap(a, 0, 1, array);
	else if (a->stack[2] == a->min)
	{
		ft_rotate(a, UP, array);
		ft_rotate(a, UP, array);
	}
	else if (a->stack[3] == a->min)
	{
		ft_rotate(a, DOWN, array);
		ft_rotate(a, DOWN, array);
	}
	else if (a->stack[4] == a->min)
		ft_rotate(a, DOWN, array);
	ft_push(a, b, array);
	ft_set_stat(a, 4);
	ft_four_elem_sort(a, b, array);
	ft_push(b, a, array);
}

void	ft_basic_sort(t_stack *a, t_stack *b, t_list **array)
{
	if (a->n_elem == 2)
		if (a->stack[0] > a->stack[1])
			ft_swap(a, 0, 1, array);
	ft_set_stat(a, a->n_elem);
	if (a->n_elem == 3)
		ft_three_elem_sort(a, array);
	if (a->n_elem == 4)
		ft_four_elem_sort(a, b, array);
	if (a->n_elem == 5)
		ft_five_elem_sort(a, b, array);
}
