/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:30:31 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 17:13:49 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long	ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\f' || c == '\t'
	|| c == '\n' || c == '\r' || c == '\v')
		return (VALID_PARSE_LONG);
	return (ERROR_PARSE_LONG);
}