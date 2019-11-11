/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:24:31 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 17:18:19 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

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
