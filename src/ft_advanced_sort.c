/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:25:45 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:27:25 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_advanced_three_elem_sort(t_stack *a, t_stack *b, t_list **list)
{
	if (a->stack[0] == a->min)
	{
		if (a->stack[1] == a->max)
		{
			ft_push(a, b, list);
			ft_swap(a, 0, 1, list);
			ft_push(b, a, list);
		}
	}
	else if (a->stack[0] == a->max
	|| (a->stack[0] != a->max && a->stack[0] == a->min))
	{
		ft_swap(a, 0, 1, list);
		ft_advanced_three_elem_sort(a, b, list);
	}
	else
	{
		if (a->stack[1] == a->max)
		{
			ft_push(a, b, list);
			ft_swap(a, 0, 1, list);
			ft_push(b, a, list);
		}
		ft_swap(a, 0, 1, list);
	}
}

void	ft_advanced_sort(t_stack *a, t_stack *b, t_list **list, int len)
{
	ft_set_stat(a, len);
	if (len == 2)
		if (a->stack[0] > a->stack[1])
			ft_swap(a, 0, 1, list);
	if (len == 3)
		ft_advanced_three_elem_sort(a, b, list);
}
