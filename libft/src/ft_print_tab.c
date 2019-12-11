/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:14:34 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:15:04 by cghanime         ###   ########.fr       */
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
