/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:48:48 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/13 11:13:29 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_array_len(char **array)
{
	int	i;

	if (!array)
		return (0);
	i = 0;
	while (array[i] != NULL)
		i += 1;
	return (i);
}
