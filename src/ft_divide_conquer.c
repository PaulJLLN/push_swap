/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divide_conquer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 10:10:17 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/11 10:39:21 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_dispatch_median_sup(t_stack *a, t_stack *b, t_list **array, int len)
{
	int	median;
	int	i;
	int	ward;
	int	sup;

	ward = 0;
	i = 0;
	median = ft_find_median(b, len);
	sup = len / 2;
	while (i < len && ward < sup)
	{
		if (b->stack[0] > median)
		{
			ft_push(b, a, array);
			ward += 1;
		}
		else
			ft_rotate(b, UP, array);
		i += 1;
	}
	len = 0;
	while (len++ < i - ward)
		ft_rotate(b, DOWN, array);
}

void	ft_dispatch_median_inf(t_stack *a, t_stack *b, t_list **array, int len)
{
	int	median;
	int	i;
	int	ward;
	int	sup;

	ward = 0;
	i = 0;
	median = ft_find_median(a, len);
	sup = (len % 2 == 1 ? len / 2 + 1 : len / 2);
	while (i < len && ward < sup)
	{
		if (a->stack[0] < median)
		{
			ft_push(a, b, array);
			ward += 1;
		}
		else
			ft_rotate(a, UP, array);
		i += 1;
	}
	len = 0;
	while (len++ < i - ward)
		ft_rotate(a, DOWN, array);
}

void	ft_divide_stack_b(t_stack *a, t_stack *b, t_list **array, int len)
{
	if ((len < 6 && b->n_elem == len) || len < 4)
	{
		if (b->n_elem == len)
			ft_reverse_basic_sort(a, b, array);
		else
			ft_reverse_advanced_sort(a, b, array, len);
		while (len--)
			ft_push(b, a, array);
		return ;
	}
	else
	{
		ft_dispatch_median_sup(a, b, array, len);
		ft_divide_stack_a(a, b, array, len / 2);
	}
	ft_divide_stack_b(a, b, array, (len % 2 == 1 ? len / 2 + 1 : len / 2));
}

void	ft_divide_stack_a(t_stack *a, t_stack *b, t_list **array, int len)
{
	if ((len < 6 && a->n_elem == len) || len < 4)
	{
		if (a->n_elem == len)
			ft_basic_sort(a, b, array);
		else
			ft_advanced_sort(a, b, array, len);
		return ;
	}
	else
	{
		ft_dispatch_median_inf(a, b, array, len);
		if (ft_sorted_list_checking(a->stack, len) == FALSE)
			ft_divide_stack_a(a, b, array, len / 2);
	}
	ft_divide_stack_b(a, b, array, (len % 2 == 1 ? len / 2 + 1 : len / 2));
}
