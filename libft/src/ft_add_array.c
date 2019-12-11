/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:04:20 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:06:05 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_add_array(char **array, char **to_add, int len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (array[j] != NULL)
		j += 1;
	while (i < len)
	{
		array[j + i] = ft_strdup(to_add[i]);
		i += 1;
	}
}
