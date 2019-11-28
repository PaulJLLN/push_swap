/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_move_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:27:39 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/28 16:43:59 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t					ft_number_move_str(char **str)
{
	char				*ref_s;

	ref_s = *str;
	while (ft_is_number(*ref_s) == L_TRUE)
		ref_s += 1;
	*str = ref_s;
	return (TRUE);
}
