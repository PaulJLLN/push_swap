/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_tab_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:13:52 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:15:04 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

void		ft_n_tab_del(long *n_tab, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		n_tab[i] = 0;
		i += 1;
	}
	free(n_tab);
}
