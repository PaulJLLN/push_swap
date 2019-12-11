/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_add_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:04:34 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:06:06 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_array_add_element(char **array, char *str)
{
	if (!array)
		return ;
	while (*array != NULL)
		array += 1;
	*array = ft_strdup(str);
}
