/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_whitespace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:17:08 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:17:49 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_skip_whitespace(char **s)
{
	char *str;

	if (!s || !*s)
		return ;
	str = *s;
	while (ft_is_whitespace(*str) == L_TRUE)
		str += 1;
	*s = str;
}
