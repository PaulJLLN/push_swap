/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:26:35 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 16:26:50 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_bubble_sort(long *tab, int len)
{
	int i;
	int j;
	int	i_min;
	int	min;

	i_min = 0;
	i = 0;
	while (i < len)
	{
		min = tab[i];
		i_min = i;
		j = i + 1;
		while (j < len)
		{
			if (tab[j] < min)
			{
				min = tab[j];
				i_min = j;
			}
			j += 1;
		}
		tab[i_min] = tab[i];
		tab[i] = min;
		i += 1;
	}
}
