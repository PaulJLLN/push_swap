/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_checking.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:27:18 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:27:28 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sorted_list_checking_decreasing(long *tab, int len)
{
	int	i;
	int	j;

	i = 0;
	if (!tab || len == 0)
		return (FALSE);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[j] > tab[i] || tab[j] == tab[i])
				return (FALSE);
			j += 1;
		}
		i += 1;
	}
	return (TRUE);
}

int	ft_sorted_list_checking(long *tab, int len)
{
	int	i;
	int	j;

	i = 0;
	if (!tab || len == 0)
		return (FALSE);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[j] < tab[i] || tab[j] == tab[i])
				return (FALSE);
			j += 1;
		}
		i += 1;
	}
	return (TRUE);
}
