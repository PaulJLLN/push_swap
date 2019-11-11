/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:29:33 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 17:13:36 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long	ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (VALID_PARSE_LONG);
	return (ERROR_PARSE_LONG);
}
