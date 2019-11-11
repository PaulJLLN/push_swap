/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpdupf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:16:20 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/11 15:23:30 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strpdupf(char *src, char c, char **rest)
{
	char	*result;
	char	*tmp;
	int		i;

	i = 0;
	result = NULL;
	if (!src || !rest)
		return (NULL);
	if (!(result = (char *)malloc(sizeof(char) * (ft_strclen(src, c) + 1))))
		return (NULL);
	while (src[i] != 0 && src[i] != c)
	{
		result[i] = src[i];
		i += 1;
	}
	result[i] = 0;
	if (src[i] != 0)
	{
		if (!(tmp = ft_strdup(src + i + 1)))
			return (NULL);
		free(*rest);
		*rest = tmp;
	}
	else
		*rest = NULL;
	if (src[i] != 0 && src[i + 1] == 0)
		*rest = NULL;
	return (result);
}
