/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:49:12 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 17:10:19 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

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
