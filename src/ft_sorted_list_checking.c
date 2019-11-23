/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_checking.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:26:48 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/15 16:03:26 by pauljull         ###   ########.fr       */
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
