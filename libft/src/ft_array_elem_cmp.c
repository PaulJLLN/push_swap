/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_elem_cmp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:03:53 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 17:12:32 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

long	ft_array_elem_cmp(char *str, char **array)
{
	if (!str || !array)
		return (ERROR_PARSE_LONG);
	while (*array != NULL)
	{
		if (ft_strcmp(str, *array) == FALSE)
			return (VALID_PARSE_LONG);
		array += 1;
	}
	return (ERROR_PARSE_LONG);
}