/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:26:14 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:27:26 by cghanime         ###   ########.fr       */
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
