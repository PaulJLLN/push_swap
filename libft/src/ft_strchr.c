/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:23:35 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/26 17:21:44 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != 0)
	{
		if (*s == c)
			return ((char *)s);
		s += 1;
	}
	if (c == 0 && *s == 0)
		return ((char *)s);
	return (NULL);
}
