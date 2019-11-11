/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:13:37 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/31 02:30:34 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	ft_find_min_sup(t_stack *stack, int len)
{
	int i;
	long min_sup;

	i = 0;
	if (!stack->stack || len == 0)
		return (0);
	min_sup = stack->stack[0];
	while (i < len)
	{
		if (min_sup > stack->stack[i] && stack->stack[i] > stack->min)
			min_sup = stack->stack[i];
		i += 1;
	}
	return (min_sup);
}

int		ft_find_median(t_stack *stack, int len)
{
	int	median;
	long	*tab;

	tab = ft_tabdup(stack->stack, len);
	ft_bubble_sort(tab, len);
	if (stack->no == 'A')
		median = tab[(len % 2 == 0 ? len / 2 : len /2 + 1)];
	if (stack->no == 'B')
		median = tab[(len % 2 == 1 ? len / 2 : len /2 - 1)];
	ft_n_tab_del(tab, len);
	return (median);
}

long		ft_find_max_1(t_stack *stack, int len)
{
	int 	i;
	long	max_1;

	i = 0;
	if (!stack->stack|| len == 0)
		return (0);
	max_1 = stack->stack[0];
	while (i < len)
	{
		if (max_1 < stack->stack[i] && stack->stack[i] < stack->max)
			max_1 = stack->stack[i];
		i += 1;
	}
	return (max_1);
}

long	ft_find_max(t_stack *stack, int len)
{
	int i;
	long max;

	i = 0;
	if (!stack->stack || len == 0)
		return (0);
	max = stack->stack[0];
	while (i < len)
	{
		if (max < stack->stack[i])
			max = stack->stack[i];
		i += 1;
	}
	return (max);
}

long	ft_find_min(t_stack *stack, int len)
{
	int i;
	long min;

	i = 0;
	if (!stack->stack || len == 0)
		return (0);
	min = stack->stack[0];
	while (i < len)
	{
		if (min > stack->stack[i])
			min = stack->stack[i];
		i += 1;
	}
	return (min);
}
