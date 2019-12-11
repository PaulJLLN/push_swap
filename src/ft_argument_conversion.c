/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_conversion.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:25:53 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:27:26 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void		ft_n_tab_init(long *n_tab, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		n_tab[i] = 0;
		i += 1;
	}
}

static int		ft_duplicate(long *n_tab, int len)
{
	int			i;
	int			j;
	long		tmp;

	i = 0;
	while (i < len)
	{
		tmp = n_tab[i];
		j = i + 1;
		while (j < len)
		{
			if (tmp == n_tab[j])
			{
				ft_n_tab_del(n_tab, (size_t)len);
				return (FALSE);
			}
			j += 1;
		}
		i += 1;
	}
	return (TRUE);
}

long			*ft_argument_conversion(char **array)
{
	long		*n_tab;
	size_t		i;
	int			len;

	i = 0;
	n_tab = NULL;
	if (!array)
		return (NULL);
	len = ft_array_len(array);
	if (!(n_tab = (long *)malloc(sizeof(long) * len)))
		return (NULL);
	ft_n_tab_init(n_tab, len);
	while (array[i] != NULL)
	{
		n_tab[i] = ft_atoi(array[i]);
		i += 1;
	}
	ft_del_array(array);
	if (ft_duplicate(n_tab, len) == FALSE)
		return (NULL);
	return (n_tab);
}
