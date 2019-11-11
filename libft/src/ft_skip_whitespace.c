/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_whitespace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:30:53 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 17:16:36 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_skip_whitespace(char **s)
{
	char *str;

	if (!s || !*s)
		return ;
	str = *s;
	while (ft_is_whitespace(*str) == VALID_PARSE_LONG)
		str += 1;
	*s = str;
}
