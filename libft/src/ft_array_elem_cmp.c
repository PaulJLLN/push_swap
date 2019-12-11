/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_elem_cmp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:04:45 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:06:06 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long	ft_array_elem_cmp(char *str, char **array)
{
	if (!str || !array)
		return (L_FALSE);
	while (*array != NULL)
	{
		if (ft_strcmp(str, *array) == FALSE)
			return (L_TRUE);
		array += 1;
	}
	return (L_FALSE);
}
