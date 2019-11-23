/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_tab_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 11:43:56 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/13 11:11:06 by pauljull         ###   ########.fr       */
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
