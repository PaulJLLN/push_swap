/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_advanced_sort.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:27:04 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:27:27 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_advanced_three_elem_sort(t_stack *a, t_stack *b,
		t_list **array)
{
	if (b->stack[0] == b->max)
	{
		if (b->stack[1] == b->min)
		{
			ft_push(b, a, array);
			ft_swap(b, 0, 1, array);
			ft_push(a, b, array);
		}
	}
	else if (b->stack[0] == b->min || (b->stack[0] != b->min
	&& b->stack[0] == b->max))
	{
		ft_swap(b, 0, 1, array);
		ft_reverse_advanced_three_elem_sort(a, b, array);
	}
	else
	{
		if (b->stack[1] == b->min)
		{
			ft_push(b, a, array);
			ft_swap(b, 0, 1, array);
			ft_push(a, b, array);
		}
		ft_swap(b, 0, 1, array);
	}
}

void	ft_reverse_advanced_sort(t_stack *a, t_stack *b,
		t_list **array, int len)
{
	ft_set_stat(b, len);
	if (len == 2)
		if (b->stack[0] < b->stack[1])
			ft_swap(b, 0, 1, array);
	if (len == 3)
		ft_reverse_advanced_three_elem_sort(a, b, array);
}
