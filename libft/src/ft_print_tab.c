/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:05:39 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/18 09:35:15 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_print_tab(long *tab, size_t len)
{
	size_t	i;

	i = 0;
	if (!tab)
		ft_putstr("Le tableau n'existe pas.\n");
	while (i < len)
	{
		if (tab[i] != NULL_VALUE)
			ft_putnbr(tab[i]);
		else
			ft_putstr("NULL\n");
		i += 1;
	}
	ft_putchar('\n');
}
