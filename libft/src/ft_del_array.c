/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:05:32 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:06:07 by cghanime         ###   ########.fr       */
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
