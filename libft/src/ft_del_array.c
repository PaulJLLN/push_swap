/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:24:06 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/18 09:33:39 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

void	ft_del_array(char **array)
{
	unsigned int	i;

	i = 0;
	while (array[i] != NULL)
	{
		ft_strdel(array + i);
		i += 1;
	}
	free(array);
}
