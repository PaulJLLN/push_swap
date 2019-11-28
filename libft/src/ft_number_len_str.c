/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_len_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:27:34 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/28 16:43:55 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int				ft_number_len_str(char *str)
{
	int			i;

	i = 0;
	if (str[i] == '-')
		i += 1;
	while (ft_is_number(str[i]) == L_TRUE)
		i += 1;
	return (i);
}
