/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_stat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:47:16 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/13 12:31:26 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	*ft_tabdup(long *tab, int len)
{
	long	*res;
	int		i;

	i = 0;
	if (!(res = (long *)malloc(sizeof(long) * len)))
		return (NULL);
	while (i < len)
	{
		res[i] = tab[i];
		i += 1;
	}
	return (res);
}

void	ft_set_stat(t_stack *stack, size_t len)
{
	long	*tmp;

	tmp = ft_tabdup(stack->stack, len);
	ft_bubble_sort(tmp, len);
	stack->min = tmp[0];
	stack->max = tmp[len - 1];
	ft_n_tab_del(tmp, len);
}
