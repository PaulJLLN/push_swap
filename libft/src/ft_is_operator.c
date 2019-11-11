/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_operator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:30:03 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 17:13:41 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long		ft_is_operator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (VALID_PARSE_LONG);
	return (ERROR_PARSE_LONG);
}
