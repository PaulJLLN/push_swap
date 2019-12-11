/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:17:23 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:17:50 by cghanime         ###   ########.fr       */
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
