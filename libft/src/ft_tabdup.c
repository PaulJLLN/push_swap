/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:21:46 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:22:09 by cghanime         ###   ########.fr       */
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
