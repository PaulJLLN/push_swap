/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_stat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:27:13 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:27:28 by cghanime         ###   ########.fr       */
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
