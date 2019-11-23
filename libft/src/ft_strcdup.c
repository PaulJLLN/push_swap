/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 08:59:55 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:42 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strcdup(char *str, int c)
{
	char	*s;
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	if (!(s = (char *)malloc(sizeof(char) * (ft_strclen(str, c) + 1))))
		return (NULL);
	while (str[i] && str[i] != c)
	{
		s[i] = str[i];
		i += 1;
	}
	s[i] = 0;
	return (s);
}
