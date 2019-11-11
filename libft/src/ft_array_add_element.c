/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_add_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:51:16 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/03 11:59:02 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

void		ft_array_add_element(char **array, char *str)
{
	if (!array)
		return ;
	while (*array != NULL)
		array += 1;
	*array = ft_strdup(str);
}
