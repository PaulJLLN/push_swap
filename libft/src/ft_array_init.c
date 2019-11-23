/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:49:47 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/18 09:33:29 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

void	ft_array_init(char **array, int len)
{
	int	i;

	i = 0;
	if (!array)
		return ;
	while (i < len)
	{
		array[i] = NULL;
		i += 1;
	}
}
