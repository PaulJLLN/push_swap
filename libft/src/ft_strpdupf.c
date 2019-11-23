/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpdupf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:16:20 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/18 09:36:17 by pauljull         ###   ########.fr       */
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
	result = ft_strcdup(src, c);
	while (src[i] != 0 && src[i] != c)
		i += 1;
	if (src[i] != 0 && src[i + 1] == 0)
	{
		free(*rest);
		*rest = NULL;
	}
	else if (src[i] != 0)
	{
		if (!(tmp = ft_strdup(src + i + 1)))
			return (NULL);
		free(*rest);
		*rest = tmp;
	}
	return (result);
}
