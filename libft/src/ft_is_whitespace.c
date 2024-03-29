/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:07:37 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:08:15 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long	ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\f' || c == '\t'
	|| c == '\n' || c == '\r' || c == '\v')
		return (L_TRUE);
	return (L_FALSE);
}
